#include <stdio.h>

int main() {
   int vetor1[50], vetor2[50], soma[50];
   int i;

   // ler valores do primeiro vetor
   printf("Digite os valores do primeiro vetor:\n");
   for (i = 0; i < 50; i++) {
      scanf("%d", &vetor1[i]);
   }

   // ler valores do segundo vetor
   printf("Digite os valores do segundo vetor:\n");
   for (i = 0; i < 50; i++) {
      scanf("%d", &vetor2[i]);
   }

   // realizar a soma dos dois vetores
   for (i = 0; i < 50; i++) {
      soma[i] = vetor1[i] + vetor2[i];
   }

   // imprimir o vetor resultado da soma
   printf("Resultado da soma dos dois vetores:\n");
   for (i = 0; i < 50; i++) {
      printf("%d ", soma[i]);
   }
   printf("\n");

   return 0;
}