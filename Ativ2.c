#include <stdio.h>
#include <stdlib.h>

int main() {

    int x;

    printf("Digite um numero qualquer: ");
    scanf("%d", &x);

    switch(x) {

        case 1 :
            printf("A");
            break;

        case 2 :
            printf("B");
            break;

        case 3 :
            printf("C");
            break;

        case 4 :
            printf("D");
            break;

        default :
            printf("Escolha invalida!");
            break;
    }

    printf("\n\n");

    system("pause");
    return 0;
}