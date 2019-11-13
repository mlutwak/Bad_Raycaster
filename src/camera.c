#include "camera.h"
// ray constructor
ray_t* new_ray() {
    ray_t* nr = malloc(sizeof(ray_t));
    return nr;
}

// generate random ray through a pixel
// generate in camera space, then transform to world coordinates
ray_t* get_ray_through_pixel(camera_t* cam, size_t x, size_t y) {
    ray_t* res = new_ray();
    vec3_assign((res->origin.v), (cam->origin.v));
    float hang, vang;
    hang = ((x*1.0)/cam->hpix-0.5) * cam->hfov;
    vang = ((y*1.0)/cam->vpix-0.5) * cam->vfov;

    float xoff = tanf(hang);
    float yoff = tanf(vang);
    vec3((res->dir.v), xoff, yoff, -1.f);
    vec3_normalize((res->dir.v), (res->dir.v));
    return res;
}

// no rotating camera for now
/*
void camera_setpos(camera_t* c, vec3* origin, vec3* dir) {
    vec3_assign(c->origin, origin);
    vec3_assign(c->dir, dir);

    mat3 smat3_rotation_x(
}
*/
