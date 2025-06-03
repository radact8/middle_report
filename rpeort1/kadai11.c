#include <stdio.h>
#include "kadai1.h"

int main(void){
  Kamoku *p;
  for(p=list; p->day!=-1; p++){
    printkamoku(p);
    printf("\n");
  }
  return 0;
}