#include <stdlib.h>
#include <stdio.h>


#define MATHC_USE_UNIONS

#include "../lib/mathc.h"


#define WIDTH   20
#define HEIGHT  20
#define CAM_HFOV    90
#define CAM_VFOV    90


typedef struct camera {
    struct vec3 origin;
    struct vec3 dir;
    struct mat3 c2w;
    size_t hpix;
    size_t vpix;
    float hfov;
    float vfov;
} camera_t;

typedef struct ray {
    struct vec3 origin;
    struct vec3 dir;
} ray_t;



ray_t* new_ray();

// generate random ray through a pixel
ray_t* get_ray_through_pixel(camera_t* cam, size_t x, size_t y);
// void camera_setpos(camera_t* c, vec3_t* origin, vec3_t* dir);
