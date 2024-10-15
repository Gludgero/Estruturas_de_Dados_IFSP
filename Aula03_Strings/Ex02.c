#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char nome[30], snome1[30], snome2[30];

    puts("Digite seu nome:");
    gets(nome);

    puts("Digite  seu primeiro sobrenome:");
    gets(snome1);

    puts("Digite o segundo sobrenome.");
    gets(snome2);

    strcat(nome, " ");
    strcat(nome, snome1);
    strcat(nome, " ");
    strcat(nome, snome2);

    puts(nome);
}
