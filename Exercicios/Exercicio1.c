#include <stdio.h>
#include <stdlib.h>

void main(){

  //1. Fazer um programa em C que pergunta um valor em metros e imprime o
  //correspondente em decímetros, centímetros e milímetros.

  int numero;

  printf("Digite um numero em metros: ");
  scanf("%d",&numero);

  printf("O numero em decimetros é %d \n",numero*10000);
  printf("O numero em centimetros é %d \n", numero*100);
  printf("O numero em milimetros é %d \n",numero*1000);
}