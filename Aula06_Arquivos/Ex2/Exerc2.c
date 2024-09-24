#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(){ // \n

    FILE *f1;

    f1 = fopen("ex2bin", "wb");

    if(f1 == NULL){
        printf("Teu codigo deu pau, se vira ai");
        system("pause");
        exit(1);
    }

    typedef struct funcionario{
    int ID;
    char nome[30];
    int idade;
    float salario;
    };

    struct funcionario vtrFuncionarios[5];

    for (int i=0; i < 5; i++){
        printf("Digite os dados do funcionario %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &vtrFuncionarios[i].ID);

        printf("Nome: ");
        scanf(" %[^\n]s", vtrFuncionarios[i].nome);

        printf("Idade: ");
        scanf("%d", &vtrFuncionarios[i].idade);

        printf("Salario: ");
        scanf("%f", &vtrFuncionarios[i].salario);

        printf("\n");
    }

    int retornoFWRITE = fwrite(vtrFuncionarios, 5*sizeof(struct funcionario), 5, f1);

    if(retornoFWRITE != 5){
        printf("Ihhhh, deu xabu");
        system("pause");
        exit(1);
    }

    fclose(f1);
}
