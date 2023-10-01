#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(int argc, char **argv){
  if(argc<5){
    printf("Prea putine argumente\n");
    exit(-1);
  }
  if(argc>5){
    printf("Prea multe argumente\n");
    exit(-1);
  }
  return 0;
}
