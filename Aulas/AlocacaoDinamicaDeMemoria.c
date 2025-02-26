#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MALLOC(ptr, size) { \
ptr = malloc(size); \
if(ptr == NULL) { \
fprintf(stderr, "memoria insuficiente \n"); \
exit(1); \
} \
}

void *malloc_s(size_t size) {
    void *p;
    p = malloc(size);

    if (p == NULL) {
        printf("Erro ao alocar memoria\n");
        exit(1);
    }
    return p;
}

int main(int argc, char *argv[]){
    int *p;
    MALLOC(p, sizeof(int));

    *p = 42;  // Apenas para testar o ponteiro alocado
    printf("Valor alocado: %d\n", *p);

    free(p);// Liberação da memória alocada

    int *d;

    MALLOC(d, 5 * sizeof(int));
    *d = 42;
    *(d+1) = 2;
    *(d+2) = 3;
    *(d+3) = 4;
    *(d+4) = 5;
    *(d+5) = 6;

    for (int i = 0; i < 5; i++) {
        printf("Valor alocado: %d\n", *(d+i));
    }

    free(d);

    int *e;
    e = realloc(d,  sizeof(int) * 5);

    memset(e, 0, sizeof(int) * 5);

    for (int i = 0; i < 5; i++) {
        printf("Valor alocado: %d\n", *(e+i));
    }
    return 0;
}

