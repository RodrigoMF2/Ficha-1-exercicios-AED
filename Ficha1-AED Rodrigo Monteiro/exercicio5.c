#include <stdio.h>

int main() {
   int vetor[100];
   int i;

   // preencher o vetor com 0 para números pares e 1 para números ímpares
   for (i = 0; i < 100; i++) {
      if (i % 2 == 0) {
         vetor[i] = 0; // número par
      } else {
         vetor[i] = 1; // número ímpar
      }
   }

   // imprimir o vetor
   printf("Vetor:\n");
   for (i = 0; i < 100; i++) {
      printf("%d ", vetor[i]);
   }
   printf("\n");

   return 0;
}





