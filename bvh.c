
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "bvh.h"

bvh_t *populate_bvh(char **line_addr, size_t *len_addr, FILE *fp) {

  ssize_t read;

  read = getline(line_addr, len_addr_afpddr, fp);

  char bbox_delim[] = "\n\t (),";

  int is_leaf
  float[6] corner_verts;
  int start;
  int stop;

  char *ptr = strtok(*line, bbox_delim);

  is_leaf = atoi(ptr);
  ptr = strtok(NULL, bbox_delim);
  ptr = strtok(NULL, bbox_delim);

  int i;
  for (i = 0; i < 6; i++) {
    corner_verts[i] = atof(ptr);
    ptr = strtok(NULL, bbox_delim);
  }

  start = atoi(ptr);
  ptr = strtok(NULL, bbox_delim);

  stop = atoi(ptr);
  ptr = strtok(NULL, bbox_delim);


  bvh_t *curr_node;
  curr_node = malloc(sizeof(bvh_t));

  curr_node->corner0[0] = corner_verts[0];
  curr_node->corner0[1] = corner_verts[1];
  curr_node->corner0[2] = corner_verts[2];
  curr_node->corner1[0] = corner_verts[3];
  curr_node->corner1[1] = corner_verts[4];
  curr_node->corner1[2] = corner_verts[5];

  curr_node->start_index = start;
  curr_node->stop_index = stop;

  if (is_leaf) {
    curr_node->left = NULL;
    curr_node->right = NULL;
    return curr_node;
  }

  bvh_t *left_node;
  bvh_t *right_node;

  left_node = populate_bvh(line_addr, len_addr, fp);
  right_node = populate_bvh(line_addr, len_addr, fp);

  curr_node->left = left_node;
  curr_node->right = right_node;

  return curr_node;

}

void parse_bvh_file(char *file_name) {

  FILE *fp;
  char *line = NULL;
  size_t len = 0;
  ssize_t read;
  char tri_delim[] = "\n\t (),";
  //int num_tris;
  //int i, j, is_leaf, start, end;
  //float vertex;
  int i;
  int vi;
  int num_tris;

  //Open file and check for sucess
  fp = fopen(file_name, "r");
  if (fp == NULL) {
    exit(EXIT_FAILURE);

  // parse the number of triangles in the scene
  read = getline(&line, &len, fp);
  num_tris = atoi(line);
  printf("num_tris:%d\n", num_tris);

  tris = calloc(num_tris, sizeof(tri_t));

  for (i = 0; i < num_tris; i++) {

    read = getline(&line, &len, fp);
    char *ptr = strtok(line, tri_delim);
    ptr = strtok(NULL, tri_delim);
    
    for (vi = 0; vi < 3; vi++) {
      float x = atof(ptr);
      ptr = strtok(NULL, tri_delim);
      float y = atof(ptr);
      ptr = strtok(NULL, tri_delim);
      float z = atof(ptr);
      ptr = strtok(NULL, tri_delim);
      // parse x, y, and z
      tris[i][vi][0] = x;
      tris[i][vi][1] = y;
      tris[i][vi][2] = z;
    }
  }

  bvh = populate_bvh(&line, len, fp);

  free(line);

}

void free_bvh(bvh_t *bvh_node) {
  // assume bvh_node is not null

  if (bvh_node->left != NULL) {
    free_bvh(bvh_node->left);
    free_bvh(bvh_node->right);
  }
  free(bvh_node);
}


void print_bvh_node(bvh_t *node, level) {
  int i;
  for (i = 0; i < level; i++) {
    printf("  ");
  }

  printf("(%f,%f,%f) (%f,%f,%f)", 
    node->corner0[0], node->corner0[1], node->corner0[2], 
    node->corner1[0], node->corner1[1], node->corner1[2]);

  if (node->left == NULL) {
    printf(" start:%d stop:%d\n", node->start_index, stop_index);
  }

  else {
    printf(" LR:\n");
    print_bvh_node(node->left, level+1);
    print_bvh_node(node->right, level+1);
  }
}

void print_bvh() {
  print_bvh_node(bvh, 0);
}
