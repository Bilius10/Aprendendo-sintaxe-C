#include <stdio.h>
#include <string.h>

union st{

  unsigned int numero;
   unsigned char id;
  };

int main(){
    union st st;


    st.id = 1;
    st.numero = 1;

    printf("numero: %d\n", st.numero);
    printf("id: %d\n", st.id);

    memset(&st, 0, sizeof(st));

    printf("tamanho: %llu\n", sizeof( union st));
    return 0;


  return 0;

}