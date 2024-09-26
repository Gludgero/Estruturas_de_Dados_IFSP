#include<stdio.h>
#include<stdlib.h>

int main() {

    int x, y, z;

    printf("Informe tres numeros: \n\n");
    scanf("%d %d %d", &x, &y, &z);

    if(x == y && x == z){ // adicionei uma var pra testar o &&
        printf("Os numeros sao iguais \n\n\n");
    }
    system("pause");

    return 0;
}
