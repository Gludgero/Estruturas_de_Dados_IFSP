#include<stdio.h>
#include<stdlib.h>

int main() {

    int x, y;

    printf("Informe dois numeros: \n\n");
    scanf("%d %d", &x, &y);

    if(x == y){

        printf("Os numeros sao iguais \n\n\n");
    }

    else {

        if(x > y) {

            printf("O primeiro e maior \n\n\n");
        }

        else {

            printf("O segundo e maior \n\n\n");
        }

    }
    
    system("pause");
    return 0;
}