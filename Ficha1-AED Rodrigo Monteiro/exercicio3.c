#include <stdio.h>
    
int main() {

    int i;
    float nota[3], media_aluno, media_turma = 0;

    for(i = 0; i < 3; i++){
        printf("\nDigite a nota do %d aluno: ",i+1);
        scanf("%f%f%f",&nota[0],&nota[1],&nota[2]);   

        media_aluno = (nota[0] + nota[1] + nota[2]) / 3.0;
        printf("A média do aluno %d e %.2f\n", i+1, media_aluno);  

        media_turma+=media_aluno; 
    }

    media_turma = media_turma /3.0;
    printf("A média da turma é %.2f\n", media_turma);

    return 0;
}