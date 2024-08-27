## Aula 2 - 26/08

### Arquivo temporário para Commitar os códigos dps:

### Ativ 01

#include <stdio.h>
#include <stdlib.h>

 float salarioBruto = 0, salarioFamilia = 0, vantagens = 0;

 void calculoVantagens(float numeroHoras, float salarioHora, float numeroFilho, float valorPorFilho){

    salarioBruto = numeroHoras * salarioHora;
    salarioFamilia = numeroFilho * valorPorFilho;
    vantagens = salarioBruto + salarioFamilia;
 }

int main (){

    float numeroHoras = 0, salarioHora = 0, numeroFilho = 0, valorPorFilho;
    float INSS = 0, IRPF = 0, deduções = 0, taxaIR = 0;

    printf("\nDigite quantas horas você trabalha por dia:\n");
    scanf("%f", &numeroHoras);

    printf("\nDigite quanto você ganha por hora:\n");
    scanf("%f", &salarioHora);

    printf("\nDigite quantos filhos você tem:\n");
    scanf("%f", &numeroFilho);

    printf("\nDigite quanto seu filho vale no mercado negro:\n");
    scanf("%f", &valorPorFilho);

    calculoVantagens(float numeroHoras,float salarioHora, float numeroFilho, float valorPorFilho);
    
    printf("\nDigite qual é seu INSS:\n");
    scanf("%f", &INSS);
    
    printf("\nDigite qual é seu IRPF:\n");
    scanf("%f", &IRPF);
    
    printf("\nQual é sua taxa de Imposto de renda:\n");
    scanf("%f", &taxaIR);
    
    
;
    
}
############################################################

### Ativ 02
