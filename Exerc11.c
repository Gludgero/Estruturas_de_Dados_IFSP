#include <stdio.h>
#include <stdlib.h>

int main() {

    int j = 5;

    if(j == 5) {

        j++;
        goto imprime;
    }

    j = 1350; // essa atribuição será ignorada, denovo fessor, 3 negócio pra mesma função?

    imprime :

        printf("Valor de j: %d", j);

    printf("\n\n");
    
    system("pause");
    return 0;
}