#include <stdio.h>

void main(){

  //2. Fazer um programa em C que imprime uma tabela com a tabuada de 1 a 9

  for(int i=1;i<=10;i++){

    for(int j=1;j<=10;j++){
      printf("%d x  %d = %d \n",i,j,i*j);
    }

  }

}