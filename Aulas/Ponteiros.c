#include <stdio.h>

void main(){

  int numero1 = 1;

  int *numero2 = &numero1;

  printf("%d \n",*numero2);

  numero1 = 3;

  printf("%d",*numero2);



}