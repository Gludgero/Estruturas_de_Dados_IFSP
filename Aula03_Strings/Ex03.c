#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {

    char palavra[20];
    char consoante;
    int contagem = 0;

    puts("Digite uma frase:");
    gets(palavra);

    for(int i=0; i<strlen(palavra); i++) {

        if(tolower(palavra[i]) == 'a' ||
           tolower(palavra[i]) == 'e' ||
           tolower(palavra[i]) == 'i' ||
           tolower(palavra[i]) == 'o' ||
           tolower(palavra[i]) == 'u'){
               contagem++;
           }
    }

    printf("A palavra possui %d vogais", contagem);

    printf("\n\nDigite uma consoante para substituir as vogais: ");
    consoante = getchar();

    for(int i=0; i<strlen(palavra); i++) {
        if(tolower(palavra[i]) == 'a' ||
           tolower(palavra[i]) == 'e' ||
           tolower(palavra[i]) == 'i' ||
           tolower(palavra[i]) == 'o' ||
           tolower(palavra[i]) == 'u'){
               palavra[i] = consoante;
           }
    }

    printf("\nString nova: %s\n\n", palavra);
    return 0;
}
