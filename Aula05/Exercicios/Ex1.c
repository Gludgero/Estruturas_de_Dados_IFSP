#include <stdio.h>

void addCem(int *p1, int *p2, int *p3) {
    *p1 += 100;
    *p2 += 100;
    *p3 += 100;
}

int main() {

    int v1, v2, v3;
    int *p1, *p2, *p3;

    printf("Digite o valor da primeira variavel: ");
    scanf("%d", &v1);
    printf("Digite o valor da segunda variavel: ");
    scanf("%d", &v2);
    printf("Digite o valor da terceira variavel: ");
    scanf("%d", &v3);

    p1 = &v1;
    p2 = &v2;
    p3 = &v3;

    addCem(p1, p2, p3);

    printf("Valores finais:\n\n");
    printf("Variavel 1: %d\n", v1);
    printf("Variavel 2: %d\n", v2);
    printf("Variavel 3: %d\n", v3);
    return 0;
}
