#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int soma(int a, int b){

  return a+b;
}

 void boasVidas(char nome[100]) {

    printf("Seja bem vindo %s\n " ,nome);
}

int main(){

    int res = soma(1,2);
    printf("soma = %d\n",res);

    char nome[100];
    setbuf(stdin,0);
    fgets(nome,100,stdin);
    nome[strlen(nome)-1] = '\0';


    boasVidas(nome);

  return 0;
  }