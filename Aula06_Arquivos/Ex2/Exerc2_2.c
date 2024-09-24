#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(){ // \n

    typedef struct funcionario{
    int ID;
    char nome[30];
    int idade;
    float salario;
    };

    struct funcionario func3;

    FILE *f2;
    f2 = fopen("ex2bin", "rb");

    if(f2 == NULL){
            printf("xabu, se vira ai");
            exit(1);
    }

    fseek(f2,(2*44), SEEK_SET);

    int retornoFREAD = fread(&func3, sizeof(struct funcionario), 1, f2);

    if(retornoFREAD != 1){
        printf("xabu, se vira ai");
        exit(1);
    }

    printf("\nID: %d\n", func3.ID);
    printf("Nome: %s\n", func3.nome);
    printf("Idade: %d\n", func3.idade);
    printf("Salario: %.2f\n", func3.salario);











    fclose(f2);
}
