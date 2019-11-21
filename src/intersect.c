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


mfloat_t max(mfloat_t a, mfloat_t b) {
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}

mfloat_t min(mfloat_t a, mfloat_t b) {
    if (a > b) {
        return b;
    }
    else {
        return a;
    }
}

mfloat_t intersect_box(ray_t* r, bvh_t* b) {

    mfloat_t tmin = -INFINITY;
    mfloat_t tmax = INFINITY;
    mfloat_t t1, t2;

    if (r->dir.x != 0.0) {

        t1 = (min(b->corner0[0], b->corner1[0]) - r->origin.x) / r->dir.x;
        t2 = (max(b->corner0[0], b->corner1[0]) - r->origin.x) / r->dir.x;

        tmin = max(tmin, min(t1, t2));
        tmax = min(tmax, max(t1, t2));
    }

    if (r->dir.y != 0.0) {

        t1 = (min(b->corner0[1], b->corner1[1]) - r->origin.y) / r->dir.y;
        t2 = (max(b->corner0[1], b->corner1[1]) - r->origin.y) / r->dir.y;

        tmin = max(tmin, min(t1, t2));
        tmax = min(tmax, max(t1, t2));
    }

    if (r->dir.z != 0.0) {

        t1 = (min(b->corner0[2], b->corner1[2]) - r->origin.z) / r->dir.z;
        t2 = (max(b->corner0[2], b->corner1[2]) - r->origin.z) / r->dir.z;

        tmin = max(tmin, min(t1, t2));
        tmax = min(tmax, max(t1, t2));
    }

    // does line isect work?
    if (tmax < tmin) return ISECT_MISS;
    // is isect in front?
    if (tmin > 0 && tmax > 0) return ISECT_MISS;

    return ISECT_MISS - 1;

}

/*
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
    if (MFABS(det) < MFLT_EPSILON) return ISECT_MISS;

    mfloat_t invDet = 1 / det;

    mfloat_t tvec[3];
    vec3_subtract(tvec, r->origin.v, v0);

    mfloat_t u = vec3_dot(tvec, pvec) * invDet;

    if (u < 0 || u > 1) return ISECT_MISS;

    mfloat_t qvec[3];
    vec3_cross(qvec, tvec, v0v1);

    mfloat_t v = vec3_dot(r->dir.v, qvec) * invDet;
    if (v < 0 || u + v > 1) return ISECT_MISS;

    mfloat_t t = vec3_dot(v0v2, qvec) * invDet;

    return t;
}
*/
mfloat_t intersect_tri(ray_t* r, tri_t tri) {
    mfloat_t* v0, *v1, *v2;
    v0 = (mfloat_t *) (&tri[0]);
    v1 = (mfloat_t *) (&tri[1]);
    v2 = (mfloat_t *) (&tri[2]);

    // precompute some vals
    mfloat_t s[3];
    vec3_subtract(s, r->origin.v, v0);
    mfloat_t e1[3], e2[3];
    vec3_subtract(e1, v1, v0);
    vec3_subtract(e2, v2, v0);
    mfloat_t e1d[3], se2[3];
    vec3_cross(e1d, e1, r->dir.v);
    vec3_cross(se2, s, e2);
    mfloat_t denom = vec3_dot(e1d, e2);
    mfloat_t uvt[3];
    if (denom != 0) {
        uvt[0] = -1/denom * vec3_dot(se2, r->dir.v);
        uvt[1] =  1/denom * vec3_dot(e1d, s);
        uvt[2] = -1/denom * vec3_dot(se2, e1);
    }
    else {
        uvt[0] = -1;
        uvt[1] = -1;
        uvt[2] = -1;
    }

    if (uvt[0] < 0 || uvt[1] < 0 ||
        uvt[0] > 1 || uvt[1] > 1 ||
        uvt[0] + uvt[1] > 1) {
        return ISECT_MISS;
    }
    // if behind,
    if (uvt[2] > 0) {
        return ISECT_MISS;
    }

    return uvt[2];
}

