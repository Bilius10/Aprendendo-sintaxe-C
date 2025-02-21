#include <stdio.h>

int main(){

  printf("Escolha um numero: \n");

  int a;
  scanf("%d", &a);


  switch(a){
    case 1:
      printf("1");
      break;
    case 2:
       printf("2");
       break;
    default:
      printf("Escolha um numero valida\n");
      break;
  }

  return 0;
}