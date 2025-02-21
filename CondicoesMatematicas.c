#include <stdio.h>

int main() {

 int a = 0;

 if(a != 2) {
     printf("nao e 3\n");
 }

 if (a < 0) {
     printf("negativo\n");
 }else if (a > 0) {
     printf("positivo\n");
 }else if (a == 0) {
     printf("zero\n");
 }

 char b = 'a';

 if(b != 'c') {
     printf("%c", b);
 }

  return 0;
}