#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char nomeTrabalhador[30];
    int idadeTrabalhador;
    float salarioTrabalhador;

    puts("Digite o nome do trabalhador:");
    gets(nomeTrabalhador);

    puts("Digite a idade do trabalhador:");
    scanf("%d",&idadeTrabalhador);

    puts("Digite o salario do trabalhador:");
    scanf("%f",&salarioTrabalhador);

    puts("\n\nDetalhes do trabalhador:\n");
    printf("Nome: %s\n", nomeTrabalhador);
    printf("Idade: %d\n", idadeTrabalhador);
    printf("Salario: %.2f", salarioTrabalhador);

    return 0;
}
