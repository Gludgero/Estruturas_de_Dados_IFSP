#include <stdio.h>
#include <string.h>
#include <stdlib.h>

    // Escreva um programa que solicita ao usuário a quantidade de alunos de uma turma aloque um vetor dinamicamente com esta quantidade e armazene as notas dos alunos.
    // Depois de coletar do teclado, armazenar no vetor dinâmico e imprimir as notas de todos os alunos,
    // imprime também a média aritmética de toda a turma. Entregue no Moodle.
int main() {

    int qtdAlunos = 0;
    int *vtr = NULL;
    int media = 0;

    printf("Digite quantos alunos estao matriculados na turma :\n");
    scanf("%d", &qtdAlunos);

    vtr = (int*) calloc(qtdAlunos, sizeof(int));

    if(vtr == NULL){
        printf("Deu ruim irmao, se vira ae");
        exit(1);
    }

    for(int i = 0; i < qtdAlunos; i++){
        printf("\nDigite a nota do aluno [%d] :\n", i + 1);
        scanf("%d", &vtr[i]);
        media += vtr[i];
    }

    system("cls");

    for(int i = 0; i < qtdAlunos; i++){
        printf("\nO aluno [%d] tirou a nota: %d", i + 1, vtr[i]);
    }

    printf("\n\nA media da sala foi de : %d\n\n", media/qtdAlunos);

    free(vtr);
}
