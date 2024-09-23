#include <stdio.h>

int main() {

    float vFloat[10];
    double vDouble[10];

    printf("Enderecos do vetor de float:\n");

    for (int i = 0; i < 10; i++) {
        printf("Endereco de vetorFloat[%d]: %p \n", i, (void*)&vFloat[i]);

    }

    printf("\nEnderecos do vetor de double:\n");

    for (int i = 0; i < 10; i++) {
        printf("Endereco de vetorDouble[%d]: %p \n", i, (void*)&vDouble[i]);

    }






    return 0;
}
