#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct funcionario {
    int ID;
    char nome[30];
    int idade;
    float salario;
};

int main(){

    int k = 0;
    struct funcionario f[5];
    for (int i = 0; i < 5; i++){
        printf("\nDigite o ID do funcionario %d: ", i + 1);
        scanf("%d", &f[i].ID);
        printf("\nDigite o nome do funcionario %d: ", i + 1);
        fflush(stdin);
        fgets(f[i].nome, 29, stdin);
        printf("\nDigite a idade do funcionario %d: ", i + 1);
        scanf("%d", &f[i].idade);
        printf("\nDigite o salario do funcionario %d: ", i + 1);
        scanf("%f", &f[i].salario);
        printf("\n\n");
    }

    for (int i = 0; i < 5; i++){
    printf("\n\n");
    printf("\nO ID do funcionario %d e %d", i + 1, f[i].ID);
    printf("\nO nome do funcionario %d e %s",i + 1, f[i].nome);
    printf("O idade do funcionario %d e %d",i + 1, f[i].idade);
    printf("\nO salario do funcionario %d e %.2f",i + 1, f[i].salario);
    printf("\n\n");
    }
}
