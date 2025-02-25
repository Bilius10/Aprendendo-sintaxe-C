#include <stdio.h>

void main(){

  //valor
  int numero1 = 2;

  //ponteiro numero2 recebe o endereço de numero1
  int *numero2 = &numero1;

  numero1 = 1;

  //toda vez que eu mudar numero1, mudara2
  printf("%d \n",*numero2);



}