#include <math.h>
#include <stdio.h>

int main() {

    int a = 5;
    int b = 2;

    printf("Soma: %d\n", a+b);
    printf("Menos: %d\n", a-b);
    printf("Multiplicacao: %d\n", a*b);
    printf("Divisao: %d\n", a/b);
    printf("Resto da divisao: %d\n", a%b);
    printf("Valor absoluto de -3: %d\n", abs(-3));
    int c = a+b;
    printf("Soma: %d\n", c);

    printf("%d + %d = %d\n", a, b, a+b);

    float d = 1.3;
    float e = 1.4;

    printf("Soma: %f\n", d+e);
    printf("Menos: %f\n", d-e);
    printf("Multiplicacao: %f\n", d*e);
    printf("Divisao: %f\n", d/e);



    return 0;
}