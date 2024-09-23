#include <stdio.h>

// Fun��o que recebe ponteiros e soma 100 aos valores apontados
void adicionarCem(int *p1, int *p2, int *p3) {
    *p1 += 100;
    *p2 += 100;
    *p3 += 100;
}

int main() {

    // Declara��o das vari�veis
    int var1, var2, var3;

    // Declara��o dos ponteiros
    int *p1, *p2, *p3;

    // Recebe os valores das vari�veis
    printf("Digite o valor da primeira vari�vel: ");
    scanf("%d", &var1);
    printf("Digite o valor da segunda vari�vel: ");
    scanf("%d", &var2);
    printf("Digite o valor da terceira vari�vel: ");
    scanf("%d", &var3);

    // Ponteiros apontando para as vari�veis
    p1 = &var1;
    p2 = &var2;
    p3 = &var3;

    // Chama a fun��o para modificar os valores
    adicionarCem(p1, p2, p3);

    // Imprime os valores finais
    printf("Valores finais:\n");
    printf("Vari�vel 1: %d\n", var1);
    printf("Vari�vel 2: %d\n", var2);
    printf("Vari�vel 3: %d\n", var3);

    return 0;
}
