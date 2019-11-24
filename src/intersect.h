
#define MATHC_USE_UNIONS
#include "bvh.h"
#include "../lib/mathc.h"
#include "camera.h"

#ifndef __INTERSECT__
#define __INTERSECT__

#define KERNEL_SIZE 100

void swap(mfloat_t* a, mfloat_t* b);

mfloat_t intersect(ray_t* r, bvh_t* b);

mfloat_t intersect_box(ray_t* r, bvh_t* b);

mfloat_t intersect_tri(ray_t r, tri_t t);

mfloat_t intersect_kernel(ray_t r, tri_t[KERNEL_SIZE], size_t num_tris);;

#endif
