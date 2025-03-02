#include <stdio.h>
#include <string.h>

int main(){

char str[10];

//j,o,a,o,_,_,_,_,_,_
printf("Digite uma frase:\n");

setbuf(stdin,0);

fgets(str,100,stdin);

str[strlen(str)-1] = '\0';

printf("%s",str);

 return 0;
}
