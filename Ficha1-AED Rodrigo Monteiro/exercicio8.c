#include <stdio.h>

int main() {
    int numeroSala, capacidadeSala, alunosMatriculados, cadeirasOcupadas;
    
    // Lendo os valores de entrada
    printf("Digite o número da sala: ");
    scanf("%d", &numeroSala);
    
    printf("Digite a capacidade da sala: ");
    scanf("%d", &capacidadeSala);
    
    printf("Digite o número de alunos matriculados: ");
    scanf("%d", &alunosMatriculados);
    
    // Calculando o número de cadeiras ocupadas e a disponibilidade da sala
    cadeirasOcupadas = alunosMatriculados > capacidadeSala ? capacidadeSala : alunosMatriculados;
    
    // Imprimindo os valores de saída
    printf("Sala %d - Capacidade: %d - Cadeiras ocupadas: %d - Disponibilidade: %s\n",
           numeroSala, capacidadeSala, cadeirasOcupadas, cadeirasOcupadas == capacidadeSala ? "Lotada" : "Disponível");
    
    return 0;
}