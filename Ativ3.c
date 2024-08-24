#include <stdio.h>
#include <stdlib.h>

int main() {

    int x;

    printf("Digite um numero qualquer: ");
    scanf("%d", &x);

    if(x == 1) {
        printf("A \n");
    }

    else if(x == 2) {
        printf("B \n");
    }

    else if(x == 3) {
        printf("C \n");
    }

    else if(x == 4) {
        printf("D \n");
    }

    else {
        printf("Escolha invalida!");
    }

    printf("\n\n");

    system("pause");
    return 0;
}