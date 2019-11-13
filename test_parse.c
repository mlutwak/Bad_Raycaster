#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main () {

  FILE *fp;
  char *line = NULL;
  size_t len = 0;
  ssize_t read;
  char tri_delim[] = "\n\t (),";
  char bbox_delim[] = "\n\t (),";
  int num_tris;
  int i, j, is_leaf, start, end;
  float vertex;

  //Open file and check for sucess
  fp = fopen("bvh_cow_3.txt", "r");
  if (fp == NULL) {
    exit(EXIT_FAILURE);
  }

  //Parse line 0 to get # of tris
  read = getline(&line, &len, fp);
  num_tris = atoi(line);
  printf("num_tris:%d\n", num_tris);

  //Parse triangles
  //Get 9 floats
  for(i = 0; i < num_tris; i++) {
    read = getline(&line, &len, fp);
    char *ptr = strtok(line, tri_delim);
    //printf("triangle: %s\n", line);
    for(j = 0; j < 10; j++) {
      if (j != 0) {
        //Vertex is the float
        vertex = atof(ptr);
        //printf("vertex %d: %f\n", j, vertex);
      }
      ptr = strtok(NULL, tri_delim);
    }
  }

  //Parse bounding boxes
  while ((read = getline(&line, &len, fp)) != -1) {
    char *ptr = strtok(line, bbox_delim);
    for(j = 0; j < 10; j++) {
      //First value in line determines if it is a leaf or node
      if (j == 0) {
        is_leaf = atoi(ptr);
        //printf("is_leaf: %d\n", is_leaf);
      }
      //8th val is always the start triangle
      else if (j == 8) {
        start = atoi(ptr);
        //printf("start:%d\n", start);
      }
      //9th val is always the end triangle
      else if (j == 9) {
        end = atoi(ptr); 
        //printf("end:%d\n", end);
      }
      //Gets the vertices
      else if (j > 1) {
        //Vertex is the float
        vertex = atof(ptr);
        //printf("vertex %d: %f\n", j-2, vertex);
      }
      ptr = strtok(NULL, bbox_delim);
    }
   //printf("bbox: %s\n", line);
  }


  free(line);
  exit(EXIT_SUCCESS);

  return 0;

};

