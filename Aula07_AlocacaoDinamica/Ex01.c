#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Faça um programa que aloque memoria para um vetor dinâmico com n números inteiros ímpares maiores que 0,
// em seguida imprima o vetor. \n
int main() {
    // Faça um programa que aloque memoria para um vetor dinâmico:
    int *vtr = NULL;
    int n = 0;
    int aux = 0;

    printf("Digite a quantidade de numeros impares que o vetor vai receber : \n");
    scanf("%d", &n);

    vtr = (int*) calloc(n, sizeof(int));

    if(vtr == NULL){
        printf("Deu erro ai, prc!");
        exit(1);
    }

    for(int i = 1; i < (n*2); i += 2){
        vtr[aux] = i;
        aux++;
    }

    for(int j = 0; j < n; j++){
        printf("O numero na posicao %d: %d \n", j, vtr[j]);
    }

    free(vtr);
}
