#include <stdio.h>



int main(){
  //criando vetor
  int vet[5];
  //inserindo valores
  vet[0] = 1;
  vet[1] = 2;
  vet[2] = 3;
  vet[3] = 4;
  vet[4] = 5;
  //printando valores
  for(int i = 0; i < 5; i++) {
    printf("vet[%d] = %d\n",i,vet[i]);
  }



  return 0;
}