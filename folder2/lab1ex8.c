#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(int argc, char **argv){
  if(argc!=4){
    printf("Eroare la argumente\n");
    exit(-1);
  }
  int suma=0;
  char *p=NULL;
  p=argv[1];
  int nr1=atoi(p);
  p=argv[2];
  int nr2=atoi(p);
  p=argv[3];
  int nr3=atoi(p);
  suma=nr1+nr2+nr3;
  printf("Suma este %d",suma);
  return 0;
}
