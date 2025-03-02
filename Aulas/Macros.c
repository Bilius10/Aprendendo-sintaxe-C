#include <stdio.h>
#include "teste.h"
#define QUAD(x) (x*x)
#define MAIOR(x, y) (x>y) ? x : y
#define VAR(x) printf("A variavel "#x" = %d\n", x)
int main(){

  int res1 = soma(1,2);
  printf("soma = %d\n",QUAD(res1));
  printf("maior %d \n", MAIOR(2,3));

    //mostra a linha que voce esta
  printf("%d \n", __LINE__);
    //mostra o dia
  printf("%s \n", __DATE__);
    //mostra a hora
  printf("%s \n", __TIME__);

  VAR(res1);
  return 0;
}