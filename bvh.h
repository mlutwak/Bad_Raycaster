
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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

void parse_bvh_file(char *file_name);

void print_bvh();
void free_bvh();