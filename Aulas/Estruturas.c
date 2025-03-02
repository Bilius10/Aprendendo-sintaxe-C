#include <stdio.h>
#include <string.h>

struct st {
    unsigned char id;
    unsigned int numero;
  };

int main(){

    struct st st;


    st.id = 1;
    st.numero = 1;

    printf("numero: %d\n", st.numero);
    printf("id: %d\n", st.id);

    memset(&st, 0, sizeof(st));

    printf("tamanho: %llu\n", sizeof( struct st));
    return 0;
}