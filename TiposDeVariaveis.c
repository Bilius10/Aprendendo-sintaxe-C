#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");

    //criando uma variavel
    int a = 5;

    //printando ela, se for numero inteiro, necessario usar %d
    printf("Salve %d\n", a);

    //mudando o valor da variavel, lembrando como é int usar %d
    scanf("%d", &a);
    printf("Salve %d\n", a);

    float b = 2.5;
    //printando ela, se for numero inteiro, necessario usar %f
    printf("Salve %f\n", b);

    //mudando o valor da variavel, lembrando como é int usar %f
    scanf("%f", &b);

    printf("Salve %f\n", b);

    char c = 'a';
    //printando ela, se for numero inteiro, necessario usar %c
    printf("Salve %c\n", c);

    //sempre que for mudar o valor de um char, e antes dela usou um int ou float, limpar o buffer"memoria temporaria de leitura"
    fflush(stdin);

    //mudando o valor da variavel, lembrando como é int usar %c
    scanf("%c", &c);
    printf("Salve %c\n", c);

    return 0;
}