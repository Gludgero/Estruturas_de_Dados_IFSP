#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct{
    int ID;
    char nome[30];
    int idade;
    float salario;
}FUNCIONARIO;

FUNCIONARIO coletaDados();

void exibeFuncionarios(FUNCIONARIO f[], int tam);

void reajustaSalario(FUNCIONARIO *func);

void rel_salario_corrigido(FUNCIONARIO func);

int main () {

    FUNCIONARIO func[5];

    for(int i=0; i<5; i++) {
        printf("Dados funcionario %d:\n", i+1);
        func[i] = coletaDados();
        printf("\n");
    }

    printf("Dados inseridos:\n");
    exibeFuncionarios(func, 5);

    for(int i=0; i<5; i++) {

        reajustaSalario(&func[i]);
        rel_salario_corrigido(func[i]);

    }

    printf("\n");
    return 0;

}

FUNCIONARIO coletaDados() {
    FUNCIONARIO f;

    printf("ID: ");
    scanf("%d",&f.ID);

    printf("Nome: ");
    fflush(stdin);
    fgets(f.nome, 29, stdin);
    f.nome[strlen(f.nome) - 1] = '\0';

    printf("Idade: ");
    scanf("%d",&f.idade);

    printf("Salario: ");
    scanf("%f",&f.salario);

    return f;
}

void exibeFuncionarios(FUNCIONARIO f[], int tam) {

    for(int i=0; i<tam; i++) {

        printf("ID do funcionario %d: %d", i+1, f[i].ID);
        printf("\nNome: %s", f[i].nome);
        printf("\nIdade: %d", f[i].idade);
        printf("\nSalario: %.2f\n\n", f[i].salario);
    }
}

void reajustaSalario(FUNCIONARIO *func) {

    func -> salario = func->salario * 1.1;

}

void rel_salario_corrigido(FUNCIONARIO func) {
    printf("\nNome do funcionario: %s\n", func.nome);
    printf("\nSalario reajustado: %.2f\n", func.salario);
}
