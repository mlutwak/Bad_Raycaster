// main

#include "camera.h"
#include <math.h>
#include "../lib/mathc.h"

int main() {

    camera_t * cam = malloc(sizeof(camera_t));

    cam->hfov = MRADIANS(CAM_HFOV);
    cam->vfov = MRADIANS(CAM_VFOV);
    cam->hpix = WIDTH;
    cam->vpix = HEIGHT;
    vec3(cam->origin.v, 0.f,0.f,5.f);
    vec3(cam->dir.v, 0.f,0.f,-1.f);

    struct vec3 xaxis;
    struct vec3 yaxis;
    struct vec3 zaxis;
    vec3(xaxis.v,1.f,0.f,0.f);
    vec3(yaxis.v,0.f,1.f,0.f);
    vec3(zaxis.v,0.f,0.f,1.f);


    for (int i=0; i<HEIGHT; i++) {
        for (int j=0; j<WIDTH; j++) {
            ray_t* ret = get_ray_through_pixel(cam, j,i);
            printf("o = (%f,%f,%f)\tdir = (%f,%f,%f)\txy=(%d,%d)\n",ret->origin.x, ret->origin.y, ret->origin.z,
                                                        ret->dir.x, ret->dir.y, ret->dir.z,j,i);
        }
    }

    return 0;
}
