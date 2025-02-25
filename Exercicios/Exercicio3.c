#include <stdio.h>

void ordenar(int numeros[], int tamanho);

int main() {

    int numeros[4] = {4, 9, 3, 7};


    ordenar(numeros, sizeof(numeros) / sizeof(numeros[0]));


    for (int i = 0; i < 4; i++) {
        printf("%d ", numeros[i]);
    }

    return 0;
}


void ordenar(int numeros[], int tamanho) {
    int num1;
    int num2;

    for (int i = 0; i < tamanho - 1; i++) {
        if (numeros[i] < numeros[i + 1]) {
            num1 = numeros[i];
            num2 = numeros[i + 1];

            numeros[i] = num2;
            numeros[i + 1] = num1;
        }
    }

    if (!(numeros[0] > numeros[1] > numeros[2] > numeros[3])) {
        ordenar(numeros, sizeof(numeros) / sizeof(numeros[0]));
    }
}

