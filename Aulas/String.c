#include <stdio.h>
#include <string.h>

int main(){

char str[100];

printf("Digite uma frase:\n");

 //limpar buuf
setbuf(stdin, 0);
//inserir palvra
fgets(str,100,stdin);
//limpar os espaços não usados
str[strlen(str)-1] = '\0';

printf("%s",str);

 return 0;
}
