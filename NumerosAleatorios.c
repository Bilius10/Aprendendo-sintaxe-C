#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand((unsigned)(time(NULL)));

    int aleatorio = rand() % 10;

    printf("%d\n", aleatorio);

    int aleatoriob = (rand() % 10) + 4;
    printf("%d\n", aleatoriob);
  return 0;
}