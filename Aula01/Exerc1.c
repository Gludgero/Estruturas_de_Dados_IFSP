#include<stdio.h>
#include<stdlib.h>

int main() {
    
    int x, y, z;

    printf("Informe dois numeros: \n\n");
    scanf("%d %d %d", &x, &y, &z);

    if(x == y && x == z){
        printf("Os numeros sao iguais \n\n\n");
    }
    system("pause");
    
    return 0;
}