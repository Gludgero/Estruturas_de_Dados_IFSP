#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int contagem_iterativa(int n);
int contagem_regressiva(int n);
// Faça um programa que utilize duas funções uma iterativa e uma recursiva que recebam um valor n
// passado pelo usuário, e imprima em contagem regressiva a partir deste valor. Exemplo: se o usuário
// passar o valor 5, o programa imprimirá 5, 4, 3, 2, 1, 0;

int main() { // \n \n \n

    int n = 0;

    printf("\nDigite um valor para iniciar a contagem regressiva :.\n");
    scanf("%d", &n);

    system("cls");

    printf("\nVersao Iterativa:\n");
    contagem_iterativa(n);

    printf("\n\nVersao Recursiva:\n");
    contagem_regressiva(n);

    system("pause");
}

int contagem_iterativa(int n){
    int aux = n;
    for(int i = 0; i < n; i++){
        printf("%d \n", aux);
        aux = aux - 1;
    }
}

int contagem_regressiva(int n){
    printf("%d \n", n);
    if(n > 1){
        contagem_regressiva(n - 1);
    }
}
