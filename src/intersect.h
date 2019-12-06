
#define MATHC_USE_UNIONS
#include "bvh.h"
#include "../lib/mathc.h"
#include "camera.h"

#ifndef __INTERSECT__
#define __INTERSECT__

#define KERNEL_SIZE 100

double intersect_time_taken;
int intersect_call_count;

void swap(mfloat_t* a, mfloat_t* b);

mfloat_t intersect(ray_t* r, bvh_t* b);

mfloat_t intersect_box(ray_t* r, bvh_t* b);

mfloat_t intersect_tri(ray_t r, tri_t t);

mfloat_t intersect_kernel(ray_t r, tri_t[KERNEL_SIZE], size_t num_tris);

mfloat_t vec3_dot(mfloat_t *v0, mfloat_t *v1);

mfloat_t *vec3_cross(mfloat_t *result, mfloat_t *v0, mfloat_t *v1);

mfloat_t *vec3_subtract(mfloat_t *result, mfloat_t *v0, mfloat_t *v1);

#endif
