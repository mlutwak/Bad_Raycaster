#include "intersect.h"
//LOOKHERECHARLESLOOKHERECHARLESLOOKHERECHARLESLOOKHERECHARLESLOOKHERECHARLESLOOKHERECHARLES
#include <time.h>
//LOOKHERECHARLESLOOKHERECHARLESLOOKHERECHARLESLOOKHERECHARLESLOOKHERECHARLESLOOKHERECHARLES



#define ISECT_MISS 18643.0

extern tri_t* tris;
extern bvh_t *bvh;

void swap(mfloat_t* a, mfloat_t* b) {
    *a=(mfloat_t) (*((uint32_t*) a)^*((uint32_t*)b));
    *b=(mfloat_t) (*((uint32_t*) a)^*((uint32_t*)b));
    *a=(mfloat_t) (*((uint32_t*) a)^*((uint32_t*)b));
}
 

mfloat_t intersect(ray_t* r, bvh_t* b) {
    //printf("ray:%x bvh:%x \n", r, b);
    //printf("doing stuff!\n");
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
            //printf("bleft:%x\n", b->left);
            left = intersect(r, b->left);
            right = intersect(r, b->right);
            return ((left > right) ? right : left);
        }
        // if this is a leaf node
        else {
            //printf("tris:%x\n", tris);
            return intersect_kernel(*r, &tris[b->start_index], b->stop_index - b->start_index);
            // for each triangle
            for (int i=b->start_index; i < b->stop_index; i++) {
                ret = intersect_tri(*r, tris[i]);
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

mfloat_t intersect_kernel(ray_t r, tri_t t[KERNEL_SIZE], size_t num_tris) {
    // for each triangle

//LOOKHERECHARLESLOOKHERECHARLESLOOKHERECHARLESLOOKHERECHARLESLOOKHERECHARLESLOOKHERECHARLES
    // for real hls we would probably need to move this out of the function call
    clock_t start, end;
    double cpu_time_used;
    start = clock();
//LOOKHERECHARLESLOOKHERECHARLESLOOKHERECHARLESLOOKHERECHARLESLOOKHERECHARLESLOOKHERECHARLES

    mfloat_t small = ISECT_MISS;
    mfloat_t ret = ISECT_MISS;
    tri_t* cur = t;
    for (size_t i = 0; i < num_tris; i++) {
        ret = intersect_tri(r, *(cur+i));
        if (ret < small) {
            small = ret;
        }
    }

//LOOKHERECHARLESLOOKHERECHARLESLOOKHERECHARLESLOOKHERECHARLESLOOKHERECHARLESLOOKHERECHARLES
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    intersect_time_taken += cpu_time_used;
    intersect_call_count++;
//LOOKHERECHARLESLOOKHERECHARLESLOOKHERECHARLESLOOKHERECHARLESLOOKHERECHARLESLOOKHERECHARLES

    return small;

}


mfloat_t intersect_box(ray_t* r, bvh_t* b) {

    mfloat_t tmin = -INFINITY;
    mfloat_t tmax = INFINITY;
    mfloat_t t1, t2;
    //printf("r:%x b:%x\n", r, b);

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
    //printf("tmax:%f tmin:%f", tmax, tmin);

    // does line isect work?
    if (tmax < tmin) {
        //printf("max<min\n");
        return ISECT_MISS;
    } 

    // is isect in front?
    if (tmin > 0 && tmax > 0) {
        //printf("min>0 max>0\n");
        return ISECT_MISS;
    }

    return ISECT_MISS - 1;

}

mfloat_t intersect_tri(ray_t r, tri_t tri) {
    mfloat_t* v0, *v1, *v2;
    v0 = (mfloat_t *) (&tri[0]);
    v1 = (mfloat_t *) (&tri[1]);
    v2 = (mfloat_t *) (&tri[2]);

    // precompute some vals
    mfloat_t s[3];
    vec3_subtract(s, r.origin.v, v0);
    mfloat_t e1[3], e2[3];
    vec3_subtract(e1, v1, v0);
    vec3_subtract(e2, v2, v0);
    mfloat_t e1d[3], se2[3];
    vec3_cross(e1d, e1, r.dir.v);
    vec3_cross(se2, s, e2);
    mfloat_t denom = vec3_dot(e1d, e2);
    mfloat_t uvt[3];
    if (denom != 0) {
        uvt[0] = -1/denom * vec3_dot(se2, r.dir.v);
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

    return MFABS(uvt[2]);
}

// mfloat_t vec3_dot(mfloat_t *v0, mfloat_t *v1)
// {
// 	return v0[0] * v1[0] + v0[1] * v1[1] + v0[2] * v1[2];
// }

// mfloat_t *vec3_cross(mfloat_t *result, mfloat_t *v0, mfloat_t *v1)
// {
// 	mfloat_t cross[VEC3_SIZE];
// 	cross[0] = v0[1] * v1[2] - v0[2] * v1[1];
// 	cross[1] = v0[2] * v1[0] - v0[0] * v1[2];
// 	cross[2] = v0[0] * v1[1] - v0[1] * v1[0];
// 	result[0] = cross[0];
// 	result[1] = cross[1];
// 	result[2] = cross[2];
// 	return result;
// }

// mfloat_t *vec3_subtract(mfloat_t *result, mfloat_t *v0, mfloat_t *v1)
// {
// 	result[0] = v0[0] - v1[0];
// 	result[1] = v0[1] - v1[1];
// 	result[2] = v0[2] - v1[2];
// 	return result;
// }
