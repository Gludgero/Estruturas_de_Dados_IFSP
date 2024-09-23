#include <stdio.h>

// Função que recebe ponteiros e soma 100 aos valores apontados
void adicionarCem(int *p1, int *p2, int *p3) {
    *p1 += 100;
    *p2 += 100;
    *p3 += 100;
}

int main() {

    // Declaração das variáveis
    int var1, var2, var3;

    // Declaração dos ponteiros
    int *p1, *p2, *p3;

    // Recebe os valores das variáveis
    printf("Digite o valor da primeira variável: ");
    scanf("%d", &var1);
    printf("Digite o valor da segunda variável: ");
    scanf("%d", &var2);
    printf("Digite o valor da terceira variável: ");
    scanf("%d", &var3);

    // Ponteiros apontando para as variáveis
    p1 = &var1;
    p2 = &var2;
    p3 = &var3;

    // Chama a função para modificar os valores
    adicionarCem(p1, p2, p3);

    // Imprime os valores finais
    printf("Valores finais:\n");
    printf("Variável 1: %d\n", var1);
    printf("Variável 2: %d\n", var2);
    printf("Variável 3: %d\n", var3);

    return 0;
}
