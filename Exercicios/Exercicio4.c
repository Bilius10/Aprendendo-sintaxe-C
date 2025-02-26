#include <stdio.h>
#include <stdlib.h>

void ordenar(int numeros[], int tamanho);

int main(){
  //Escreva um programa em C que encontre o segundo maior número de um array de 6 números inteiros usando uma função recursiva.

  int numeros[6] = {1,5,3,2,6,4};

  printf("Segundo maior numero é %d", numeros[1]);


  return 0;
}

void ordenar(int numeros[], int tamanho){

  int temp;

  for (int i = 0; i < tamanho; i++) {
    temp = numeros[i];
    numeros[i] = numeros[tamanho - 1];
    numeros[tamanho - 1] = temp;

  }

  if (!(numeros[0] > numeros[1] && numeros[1] > numeros[2] && numeros[2] > numeros[3])) {
    ordenar(numeros, tamanho);
  }
}