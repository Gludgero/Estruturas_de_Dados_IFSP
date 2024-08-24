#include <stdio.h>
#include <stdlib.h>

int main() {

    int x, y;
    
    printf("Informe um numero: \n");
    scanf("%d", &x);

    y = (x > 12) ? 100 : 200;

    printf("Valor de Y: %d \n\n\n", y);

    system("pause");
    return 0;
}