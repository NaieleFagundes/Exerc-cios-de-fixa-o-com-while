//Programa que pergunta ao usuário quantos alunos tem na sala 
//Em seguida, através de um laço while, pede ao usuário para que entre 
//com as notas de todos os alunos da sala, um por vez. 
//Por fim, o programa mostra a média aritmética da turma.

#include <stdio.h>
int main (){
    int alunos, cont = 1;
    float notas, soma = 0, media_turma;
    
    printf ("Total de alunos: ");
    scanf ("%d", &alunos);
    while (cont <= alunos){
        printf ("Digite a nota do %d aluno: ", cont);
        scanf ("%f", &notas);
        soma += notas;
        cont++;
    }
    media_turma = (soma)/alunos;
    printf ("Média da turma: %.2f", media_turma);
    return 0;
}