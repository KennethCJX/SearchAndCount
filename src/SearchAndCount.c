#include "SearchAndCount.h"
#include "ReadLine.h"
#include <stdio.h>
#include <ctype.h>
#include <malloc.h>
#include <string.h>


int searchAndCountWordInLine(char *wordToFind,char *line){
  int j=0, count = 0;
  
  for(int i=0; i<strlen(line) ;i++){
    if(line[i] == wordToFind[j]){
      j++;
      if(j == strlen(wordToFind)){
        count++;
        j =0;
      }
    } else {
      j = 0;
    }
  }
  return count;
}


int searchAndCountWordInLines(char *wordToFind,char *filename){
  int  i, count = 0;
  char **lines = readLines(filename);
  
  for(i=0; lines[i]!=NULL; i++){
  count = count + searchAndCountWordInLines(wordToFind,lines[i]);
  }
  free(lines);
  return count;
}


