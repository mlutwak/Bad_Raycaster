// main


#define ISECT_MISS 18643.0
#define MATHC_USE_UNIONS

#define WIDTH   640
#define HEIGHT  480
#define CAM_HFOV    110
#define CAM_VFOV    70

// #define STRMODE 1
#define PRNTMODE 1
// #define MULTICORE
#define THRD_CT 8
#define ROW_STEP (HEIGHT/THRD_CT)

#define B 3

#include <time.h>
#include "camera.h"
#include <math.h>
#include "../lib/mathc.h"
#include "bvh.h"
#include "intersect.h"
#include <sys/time.h>
#include <pthread.h>
#include <stdio.h>

mfloat_t dists[HEIGHT][WIDTH];
mfloat_t min_dists[THRD_CT << B];
mfloat_t max_dists[THRD_CT << B];


void *par_intersect(void *new_args) {
    void **new_args_array = (void **)new_args;
    long tid;
    tid = (long)new_args_array[0];
    camera_t *cam = (camera_t *)new_args_array[1];
    bvh_t *bvhtmp = (bvh_t *)new_args_array[2];

    //printf("tid:%ld\n", tid);

    //printf("%d, %x, %x\n", tid, cam, bvhtmp);
    //if (tid == 0) print_bvh();

    int lo = ROW_STEP * tid;
    int hi = lo + ROW_STEP - 1;

    int i, j;

    mfloat_t max_dist = -1.0;
    mfloat_t min_dist = -1.0;

    for (i=0; i<HEIGHT; i++) {
        for (j=0; j<WIDTH; j++) {
            ray_t* ret = get_ray_through_pixel(cam, j, i, true);
            mfloat_t dist;
            dist = intersect(ret, bvhtmp);
            if (dist != ISECT_MISS) printf("hit on tid:%d \n", tid);
            dists[i][j] = dist;
            if ((dist != ISECT_MISS) && max_dist < dist) max_dist = dist;
            if ((dist != ISECT_MISS) && (min_dist < 0 || min_dist > dist)) min_dist = dist;
        }
    }

    min_dists[tid << B] = min_dist;
    max_dists[tid << B] = max_dist;

    pthread_exit(NULL);
}

int main(int argc, char** argv) {

#ifndef STRMODE
    if (argc < 2) return 1;
    //printf("%s\n", argv[1]);
    parse_bvh_file(argv[1]);
    //print_bvh();
    bool yes = (argv[2][0] == 'Y');
#else
    parse_bvh_file(NULL);
    bool yes = false;
#endif

#if (PRNTMODE == 1)
    clock_t start, end;
    double cpu_time_used;
#endif

    intersect_time_taken = 0;
    intersect_call_count = 0;

    printf("after calling parse\n");

    camera_t * cam = malloc(sizeof(camera_t));

    printf("after malloc %x\n", cam);

    cam->hfov = MRADIANS(CAM_HFOV);
    cam->vfov = MRADIANS(CAM_VFOV);
    cam->hpix = WIDTH;
    cam->vpix = HEIGHT;
    vec3(cam->origin.v, 0.f,0.f,-3.f);
    cam->origin.z *= (1-yes*2);
    vec3(cam->dir.v, 0.f,0.f,-1.f);
    cam->dir.z *= (1-yes*2);



    struct vec3 xaxis;
    struct vec3 yaxis;
    struct vec3 zaxis;
    vec3(xaxis.v,1.f,0.f,0.f);
    vec3(yaxis.v,0.f,1.f,0.f);
    vec3(zaxis.v,0.f,0.f,1.f);

    int i, j;

    // mfloat_t dists[HEIGHT][WIDTH];
    mfloat_t max_dist = -1.0;
    mfloat_t min_dist = -1.0;

    pthread_t threads[THRD_CT];
    long thread;

#if (PRNTMODE == 1)
    start = clock();
#endif

#ifndef MULTICORE
    for (i=0; i<HEIGHT; i++) {
        for (j=0; j<WIDTH; j++) {
            ray_t* ret = get_ray_through_pixel(cam, j,i,yes);
            // printf("o = (%f,%f,%f)\tdir = (%f,%f,%f)\txy=(%d,%d)\n",
            //        ret->origin.x, ret->origin.y, ret->origin.z,
            //        ret->dir.x, ret->dir.y, ret->dir.z,j,i);

            mfloat_t dist;
            dist = intersect(ret, bvh);
            dists[i][j] = dist;
            if ((dist != ISECT_MISS) && max_dist < dist) max_dist = dist;
            if ((dist != ISECT_MISS) && (min_dist < 0 || min_dist > dist)) min_dist = dist;
        }
    }
#else
    for(thread = 0; thread < THRD_CT; thread++ ) {
        void **new_args = (void**)malloc(sizeof(void *) * 3);
        new_args[0] = (void *)thread;
        new_args[1] = (void *)cam;
        new_args[2] = (void *)bvh;
        pthread_create(&threads[thread], NULL, par_intersect, (void *)new_args);
        free(new_args);
    }

    // wait for other threads
    void *status;
    for (thread=0; thread < THRD_CT; thread++ ) {
        pthread_join(threads[thread], &status);
        mfloat_t local_max = max_dists[thread << B];
        mfloat_t local_min = min_dists[thread << B];
        printf("tid:%d, (%f,%f)\n", thread, local_min, local_max);
        if ((local_max != ISECT_MISS) && max_dist < local_max) max_dist = local_max;
        if ((local_min != ISECT_MISS) && (min_dist < 0 || min_dist > local_min)) min_dist = local_min;
    }
#endif

#if (PRNTMODE == 1)
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("time taken: %f\n", cpu_time_used);
    printf("intersect time taken: %f\n", intersect_time_taken);
    printf("intersect_call_count: %d\n", intersect_call_count);
#endif

    //return 0;
    printf("here:(%f,%f)\n", min_dist, max_dist);

    mfloat_t min_r, max_r, min_g, max_g, min_b, max_b;
    char miss_r, miss_g, miss_b;

    min_r = 255;
    max_r = 0;
    min_g = 0;
    max_g = 255;
    min_b = 0;
    max_b = 0;
    miss_r = 0;
    miss_g = 0;
    miss_b = 63;

#if(PRNTMODE == 0)
    for (i=0; i<HEIGHT; i++) {
        for (j=0; j<WIDTH; j++) {
            char r, g, b;
            mfloat_t dist = dists[i][j];
            if (dist == ISECT_MISS) {
                r = miss_r;
                g = miss_g;
                b = miss_b;
            }
            else {
                mfloat_t rel_dist = (dist-min_dist)/(max_dist-min_dist);
                r = (char) (rel_dist * min_r + (1.0 - rel_dist) * max_r);
                g = (char) (rel_dist * min_g + (1.0 - rel_dist) * max_g);
                b = (char) (rel_dist * min_b + (1.0 - rel_dist) * max_b);
            }
            printf("%d %d %d ", r, g, b);
        }
        printf("\n");
    }
#endif


    free_bvh();
    return 0;
}
