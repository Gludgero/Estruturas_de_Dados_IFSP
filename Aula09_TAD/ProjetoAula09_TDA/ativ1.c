#include <stdio.h>
#include <stdlib.h>
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
