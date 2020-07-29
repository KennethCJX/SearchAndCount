#include "ReadLine.h"
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>


char **readLines(char *Filename){
  char **lines = malloc(sizeof(char*)*1024);
  char buffer[1024];
  int i = 0;
  FILE *file;
  
  file = fopen(Filename, "r");
  if(file == NULL){
    printf("Error opening file!\n");
    exit(1);
  }
  
  while (fgets(buffer,1024,(FILE*)file != NULL)){
    lines[i] = strdup(buffer);
    i++;
  }
  lines[i] = NULL;
  fclose(file);
  return lines;
}


