#include <stdio.h>
#include <string.h>
#include <stdlib.h>

 // Elabore um programa que calcule a soma de duas matrizes (M x N) dinâmicas de números
 // inteiros. Deve-se considerar as dimensões fornecidas pelo usuário

int main() {

    int linhas = 0, colunas = 0;
    int **linha_1 = NULL, **linha_2 = NULL;

    printf("Digite a quantidade de linhas e colunas das matrizes: \n");
    scanf("%d %d", &linhas, &colunas);

    linha_1 = (int**) calloc(linhas, sizeof(int*));

    for(int i = 0; i < linhas; i++){
        linha_1[i] = (int*) calloc(colunas, sizeof(int));
    }

    for(int i = 0; i < linhas; i++){
       for(int j = 0; j < colunas; j++){
        printf("Digite o numero da coluna %d e linha %d da matriz 1 : \n", i + 1, j + 1);
        scanf("%d", &linha_1[i][j]);
        }
        system("cls");
    }
    system("cls");

    linha_2 = (int**) calloc(linhas, sizeof(int*));

    for(int i = 0; i < linhas; i++){
        linha_2[i] = (int*) calloc(colunas, sizeof(int));
    }

    for(int i = 0; i < linhas; i++){
       for(int j = 0; j < colunas; j++){
        printf("Digite o numero da coluna %d e linha %d\ da matriz 2 : \n", i + 1, j + 1);
        scanf("%d", &linha_2[i][j]);
        }
        system("cls");
    }
    system("cls");

    for(int i = 0; i < linhas; i++){ // Efetua a soma
       for(int j = 0; j < colunas; j++){
        linha_1[i][j] = linha_1[i][j] + linha_2[i][j];
       }
    }

     for(int i = 0; i < linhas; i++){ // Printa a matriz
       for(int j = 0; j < colunas; j++){
        printf("%d ", linha_1[i][j]);
        }
        printf("\n");
    }
 free(linha_1);
 free(linha_2);
}



