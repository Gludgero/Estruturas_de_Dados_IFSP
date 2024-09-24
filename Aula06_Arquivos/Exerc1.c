#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// Utilizando exemplos anteriores, codifique um programa que receba via teclado um pequeno texto e em seguida salve-o gerando um arquivo chamado “arq1.txt”. Visualize-o com um editor de textos (bloco de notas) \\\\\

int main(){

    FILE *f1;
    FILE *f2;
    f1 = fopen("arq1.txt", "w+");
    f2 = fopen("arq2.txt", "w+");
    char pequenoTexto[35]; // Professor, o texto usado foi: "Quando surge o alviverde imponente"

    if(f1 == NULL){
        printf("programa nao funcionou como esperado!\n");
        system("pause");
        exit(1);
    }

    printf("Digite o texto a ser impresso no arquivo:\n");
    fgets(pequenoTexto, 35, stdin);
    int retorno = fputs(pequenoTexto, f1);

    if(retorno == EOF){
        printf("Puts, deu erro no Fputs...");
    }

    // Em seguida baseado no exemplo anterior, modifique seu programa para que depois de recolhido o pequeno texto, todos os seus caracteres sejam modificados para letras maiúsculas e seja salvo com o nome de “arq2.txt”.
    for(int i = 0; i < strlen(pequenoTexto); i++){
        fputc(toupper(pequenoTexto[i]),f2);
    }

    // Imprima os dois arquivos em tela

    printf("\nO texto digitado foi: %s\n", pequenoTexto);
    rewind(f2);
    fgets(pequenoTexto, 35, f2);
    printf("\nO segundo texto, lido do segundo arquivo foi: %s \n", pequenoTexto);

    fclose(f1);
    fclose(f2);
}
