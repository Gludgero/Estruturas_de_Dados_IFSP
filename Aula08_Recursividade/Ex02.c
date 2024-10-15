#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int func_iterativa(int n);
int func_recursiva(int n);
int recebe_opc(int n);
int func_switch(int escolha, int n);

// Crie um programa para determinar o que a função recursiva abaixo calcula.

// Escreva uma função iterativa para atingir o mesmo objetivo e adicione esta função no mesmo
// programa da função recursiva, e deixe a cargo do usuário a escolha do método de cálculo.

int main() { // \n \n \n

    int n = 0, escolha = 0, nFinal = 0;

     printf("Este programa recebe um numero N e soma N com N - 1 progressivamente... \n");

    printf("\nDigite o numero base :.\n");
    scanf("%d", &n);

    escolha = recebe_opc(escolha);

    nFinal = func_switch(escolha, n);

    printf("O numero resultante foi %d :. ", nFinal);
}

int recebe_opc(int n){
    printf("\nEscolha o algoritmo recursivo (1) ou iterativo (2) :.\n");
    scanf("%d", &n);
    return n;
}

int func_switch(int escolha, int n){

    switch(escolha){
        case 1:
            n = func_recursiva(n);
            break;

        case 2:
            n = func_iterativa(n);
            break;
        default:
            printf("Digite uma opcao valida!");
            escolha = recebe_opc(escolha);
            func_switch(escolha, n);
            break;
    }
    return n;
}

int func_iterativa(int n){
    int soma = 0;
    for(int i = 0; i <= n; i++){
        soma += i;
    }
    return soma;
}

int func_recursiva(int n){

    if(n == 0 ){
        return 0;
    }
    return (n + func_recursiva(n - 1));
}



