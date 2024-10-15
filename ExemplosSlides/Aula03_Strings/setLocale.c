#include <stdio.h>
#include <locale.h>


int main(){

    setlocale(LC_ALL, "portuguese");

    char string[80] = "Teste Exemplo Set locale ç, á â ã e etc...";
    printf("%s", string);
    printf("Teste Exemplo Set locale ç, á â ã e etc...");

}

