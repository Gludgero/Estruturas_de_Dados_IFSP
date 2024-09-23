#include <stdio.h>

int main() {

    int v1, v2;

    printf("Digite o valor da primeira variavel: ");
    scanf("%d", &v1);

    printf("Digite o valor da segunda variavel: ");
    scanf("%d", &v2);

    if (&v1 > &v2) {
        printf("O maior endereco e: %p\n", (void*)&v1);
        printf("Conteudo da variavel: %d\n", v1);
    } else
        {
            printf("O maior endereço e: %p\n", (void*)&v2);
            printf("Conteudo da variavel: %d\n", v2);
        }

    return 0;
}
