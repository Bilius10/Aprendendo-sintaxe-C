#include <stdio.h>

void ordenar(int numeros[], int tamanho);

int main() {

    //Escreva um programa em C que ordene um array de 5 números inteiros em ordem crescente usando uma função recursiva.

    int numeros[4] = {4, 9, 3, 7};


    ordenar(numeros, sizeof(numeros) / sizeof(numeros[0]));


    for (int i = 0; i < 4; i++) {
        printf("%d ", numeros[i]);
    }

    return 0;
}


void ordenar(int numeros[], int tamanho) {

    int temp;

    for (int i = 0; i < tamanho - 1; i++) {
        if (numeros[i] < numeros[i + 1]) {
            temp = numeros[i];
            numeros[i] = numeros[i + 1];
            numeros[i + 1] = temp;
        }
    }

    if (!(numeros[0] > numeros[1] && numeros[1] > numeros[2] && numeros[2] > numeros[3])) {
        ordenar(numeros, tamanho);
    }

}

