#include "intersect.h"
#define ISECT_MISS 18643.0

extern tri_t* tris;
extern bvh_t *bvh;

void swap(mfloat_t* a, mfloat_t* b) {
    *a=(mfloat_t) (*((uint32_t*) a)^*((uint32_t*)b));
    *b=(mfloat_t) (*((uint32_t*) a)^*((uint32_t*)b));
    *a=(mfloat_t) (*((uint32_t*) a)^*((uint32_t*)b));
}


mfloat_t intersect(ray_t* r, bvh_t* b) {
    volatile  mfloat_t left, right, ret;
    mfloat_t small;
    size_t idx = 0;
    left = 0;
    right = 0;
    ret = ISECT_MISS;
    small = ret;
    // if we hit the bbox for this node
    if (intersect_box(r,b) != ISECT_MISS) {
        // if this isn't a leaf node node:
        if (b->left != NULL) {
            left = intersect(r, b->left);
            right = intersect(r, b->right);
            return ((left > right) ? right : left);
        }
        // if this is a leaf node
        else {
            // for each triangle
            for (int i=b->start_index; i < b->stop_index; i++) {
                ret = intersect_tri(r, tris[i]);
                if (ret < small) {
                    idx = i;
                    small = ret;
                }
            }
            return small;
        }
    }
    return ISECT_MISS;
}

mfloat_t intersect_box(ray_t* r, bvh_t* b) {
     mfloat_t tmin = (b->corner0[0] - r->origin.x) / r->dir.x;
     mfloat_t tmax = (b->corner1[0] - r->origin.x) / r->dir.x;

    if (tmin > tmax) swap(&tmin, &tmax);

     mfloat_t tymin = (b->corner0[1] - r->origin.y) / r->dir.y;
     mfloat_t tymax = (b->corner1[1] - r->origin.y) / r->dir.y;

    if (tymin > tymax) swap(&tymin, &tymax);

    if ((tmin > tymax) || (tymin > tmax))
    return ISECT_MISS;

    if (tymin > tmin)
    tmin = tymin;

    if (tymax < tmax)
    tmax = tymax;

    mfloat_t tzmin = (b->corner0[2] - r->origin.z) / r->dir.z;
    mfloat_t tzmax = (b->corner1[2] - r->origin.z) / r->dir.z;

    if (tzmin > tzmax) swap(&tzmin, &tzmax);

    if ((tmin > tzmax) || (tzmin > tmax))
    return ISECT_MISS;

    if (tzmin > tmin)
    tmin = tzmin;

    if (tzmax < tmax)
    tmax = tzmax;

    return 0.0;

}

mfloat_t intersect_tri(ray_t* r, tri_t tri) {
    mfloat_t* v0, *v1, *v2;
    v0 = (mfloat_t *) (&tri[0]);
    v1 = (mfloat_t *) (&tri[1]);
    v2 = (mfloat_t *) (&tri[2]);

    mfloat_t v0v1[3];
    vec3_subtract(v0v1, v1, v0);
    mfloat_t v0v2[3];
    vec3_subtract(v0v2, v2, v0);

    mfloat_t pvec[3];
    vec3_cross(pvec, r->dir.v, v0v2);
    mfloat_t det = (mfloat_t) vec3_dot(v0v1, pvec);

    // for now, dont care if face is backwards
    if (MFABS(det) < MFLT_EPSILON) return false;

    mfloat_t invDet = 1 / det;

    mfloat_t tvec[3];
    vec3_subtract(tvec, r->origin.v, v0);

    mfloat_t u = vec3_dot(tvec, pvec) * invDet;

    if (u < 0 || u > 1) return false;

    mfloat_t qvec[3];
    vec3_cross(qvec, tvec, v0v1);

    mfloat_t v = vec3_dot(r->dir.v, qvec) * invDet;
    if (v < 0 || u + v > 1) return false;

    mfloat_t t = vec3_dot(v0v2, qvec) * invDet;

    return t;
}



