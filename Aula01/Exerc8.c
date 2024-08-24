#include <stdio.h>
#include <stdlib.h>

int main() {

    int i = 1; // 395 nada acontece

    do {

        printf("Valor de i: %d \n", i);
        i++;
        
    } while(i <= 10);

    printf("\n\n");

    system("pause");
    return 0;
}