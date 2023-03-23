#include <stdio.h>

int main() {
   int num;

   // ler o número inteiro
   printf("Digite um numero inteiro: ");
   scanf("%d", &num);

   // verificar se o número é divisível por 5 e por 3 ao mesmo tempo
   if (num % 5 == 0 && num % 3 == 0) {
      printf("%d e divisível por 5 e por 3 ao mesmo tempo.\n", num);
   } else {
      printf("%d não e divisível por 5 e por 3 ao mesmo tempo.\n", num);
   }

   return 0;
}