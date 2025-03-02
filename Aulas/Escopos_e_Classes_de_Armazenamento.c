#include <stdio.h>

//variavel global
int x;

void funcao(void){

  for(int i = 1; i <= 4; i++){
    printf("%d \n", x++);
  }


}
int main(){

    //variavel local
  int y =2;
  x = 5;
  funcao();

  return 0;
}


