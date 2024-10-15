#include <stdlib.h>
#include <string.h>
#include <stdio.h>

struct funcionario{
    int ID;
    char nome[30];
    int idade;
    float salario;
};

int main () {
    struct funcionario func[5];
    int i;

    for (i=0; i<5; i++) {

        printf("Dados do funcionario:\n ID do funcionario %d:\n", i+1);
        scanf("%d",&func[i].ID);

        printf("\nNome do funcionario: ");
        fflush(stdin);
        fgets(func[i].nome, 29, stdin);

        printf("\nIdade do funcionario: ");
        scanf("%d",&func[i].idade);

        printf("\nSalario do funcionario: ");
        scanf("%f",&func[i].salario);

        printf("\n");

    }

    printf("\n\nDados inseridos: \n\n");

    for (i=0; i<5; i++) {

        printf("ID do funcionario %d: %d", i+1, func[i].ID);
        printf("\nNome: %s", func[i].nome);
        printf("\nIdade: %d", func[i].idade);
        printf("\nSalario: %.2f\n\n", func[i].salario);

    }

    printf("\n\n\n");
    return 0;

}
