/**********
Escreva um programa que implemente os dois módulos apresentados ao abaixo (cálculo de vantagens
e deduções). As variáveis a serem utilizadas nos módulos, devem ser globais obrigatoriamente
(somente as que recebem atribuições dentro dos módulos);

* O programa deve recolher os dados do usuário, armazená-los nas variáveis locais correspondentes no
main(), e, em seguida passar os dados aos módulos, para que estes executem os cálculos;
* Imprima na tela os resultados obtidos pelos módulos. A rotina de impressão deve ficar fora dos
módulos de cálculo, ou seja deve ficar no main().
*********/
#include <stdio.h>
#include <stdlib.h>



void calculoVantagens(double *salarioBruto, double *salarioFamilia, double *vantagens, int numeroHoras, double salarioHora, int numeroFilhos, double valorPorFilho); // salarioBruto = numeroHoras * salarioHora; salarioFamilia = numeroFilhos * valorPorFilho;

void calculoDeducoes(double *salarioBruto, double *INSS, double *IRPF,double *deducoes, double TAXA_IR);

int main(){
    double salarioBruto = 0, salarioFamilia = 0, INSS = 0, IRPF = 0, vantagens = 0, deducoes = 0;
    double TAXA_IR = 0;
    int numeroHoras = 0, numeroFilhos = 0;
    double valorPorFilho = 0, salarioHora = 0;

    printf("Bem vindo ao sistema de calculo de vantagens e deducoes!!\n");

            printf("\nDigite o numero de horas trabalhadas:\n");
            scanf("%d", &numeroHoras);
            printf("\nDigite o valor da hora:\n");
            scanf("%lf", &salarioHora);
            printf("\nDigite quantos filhos voce tem:\n");
            scanf("%d", &numeroFilhos);
            printf("\nDigite o valor por filho:\n");
            scanf("%lf", &valorPorFilho);

            calculoVantagens(&salarioBruto, &salarioFamilia, &vantagens, numeroHoras, salarioHora, numeroFilhos, valorPorFilho);
            printf("\nSuas vantagens sao de: $%.2lf\n", vantagens);

            printf("\nDigite a sua taxa de IR:\n");
            scanf("%lf", &TAXA_IR);

            calculoDeducoes(&salarioBruto, &INSS,&IRPF, &deducoes, TAXA_IR);
            printf("Suas deducoes totais sao de: %.2lf", deducoes);

    return 0;
}

void calculoVantagens(double *salarioBruto, double *salarioFamilia, double *vantagens, int numeroHoras, double salarioHora, int numeroFilhos, double valorPorFilho){

    *salarioBruto = numeroHoras * salarioHora;
    *salarioFamilia = numeroFilhos * valorPorFilho;
    *vantagens = *salarioBruto + *salarioFamilia;
}

void calculoDeducoes(double *salarioBruto, double *INSS, double *IRPF,double *deducoes, double TAXA_IR){

    *INSS = *salarioBruto * 0.08;
    *IRPF = *salarioBruto * TAXA_IR;
    *deducoes = *INSS + *IRPF;
}
