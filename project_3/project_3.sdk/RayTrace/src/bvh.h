
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#ifndef __BVH__
#define __BVH__

typedef struct bvh_node bvh_t;

struct bvh_node {
  float corner0[3];
  float corner1[3];
  bvh_t *left;
  bvh_t *right;
  int start_index;
  int stop_index;
};

typedef float tri_t[3][3];

bvh_t *bvh;
tri_t *tris;
// char *bvh_str;

void parse_bvh_file(char *file_name);
ssize_t getline_str(char **line, size_t *len, char **bvh_str);

void print_bvh();
void free_bvh();

void define_bvh_str();

#endif
