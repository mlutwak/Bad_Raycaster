
#include <stdio.h>
#include <string.h>

datatype struct bhv_node {
  float b0[3];
  float b1[3];
  float b2[3];
  bvh_t *left;
  bvh_t *right;
  int start_index;
  int stop_index;
} bvh_t;

datatype float[3] tri_t;

bvh_t *bvh;
tri_t *tris;


void parse_bvh_file(char *file_name);