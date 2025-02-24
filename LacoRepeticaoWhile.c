
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

  srand((unsigned)time(NULL));

  int numero1 = 0;
  int numero2 = 0;

  while(numero1 != 2 || numero2 != 4){
    numero1 = (rand() % 5) + 2;
    numero2 = (rand() % 5) + 2;
    printf("%d \n",numero1);
    printf("%d \n",numero2);
  }


return 0;
}