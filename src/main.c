// main


#define ISECT_MISS 18643.0
#define MATHC_USE_UNIONS

#define WIDTH   640
#define HEIGHT  480
#define CAM_HFOV    110
#define CAM_VFOV    70


#include "camera.h"
#include <math.h>
#include "../lib/mathc.h"
#include "bvh.h"
#include "intersect.h"

int main(int argc, char** argv) {
    if (argc < 2) return 1;
    //printf("%s\n", argv[1]);
    parse_bvh_file(argv[1]);
    //print_bvh();

    camera_t * cam = malloc(sizeof(camera_t));

    cam->hfov = MRADIANS(CAM_HFOV);
    cam->vfov = MRADIANS(CAM_VFOV);
    cam->hpix = WIDTH;
    cam->vpix = HEIGHT;
    vec3(cam->origin.v, 0.f,0.f,-4.f);
    vec3(cam->dir.v, 0.f,0.f,-1.f);

    struct vec3 xaxis;
    struct vec3 yaxis;
    struct vec3 zaxis;
    vec3(xaxis.v,1.f,0.f,0.f);
    vec3(yaxis.v,0.f,1.f,0.f);
    vec3(zaxis.v,0.f,0.f,1.f);

    int i, j;

    mfloat_t dists[HEIGHT][WIDTH];
    mfloat_t max_dist = -1.0;
    mfloat_t min_dist = -1.0;

    for (i=0; i<HEIGHT; i++) {
        for (j=0; j<WIDTH; j++) {
            ray_t* ret = get_ray_through_pixel(cam, j,i);
//             printf("o = (%f,%f,%f)\tdir = (%f,%f,%f)\txy=(%d,%d)\n",
//                    ret->origin.x, ret->origin.y, ret->origin.z,
//                    ret->dir.x, ret->dir.y, ret->dir.z,j,i);

            mfloat_t dist;
            dist = intersect(ret, bvh);
            dists[i][j] = dist;
            if ((dist != ISECT_MISS) && max_dist < dist) max_dist = dist;
            if ((dist != ISECT_MISS) && (min_dist < 0 || min_dist > dist)) min_dist = dist;
        }
    }

    //return 0;
    //printf("here:(%f,%f)\n", min_dist, max_dist);

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


    free_bvh();
    return 0;
}
