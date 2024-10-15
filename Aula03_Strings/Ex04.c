#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char palavra1[30], palavra2[30];

    puts("\nDigite a primeira string:");
    fgets(palavra1, 29, stdin);
    palavra1[strlen(palavra1) - 1] = '\0';

    puts("\nDigite a segunda string:");
    fgets(palavra2,29,stdin);
    palavra2[strlen(palavra2) - 1] = '\0';

    if(strstr(palavra1, palavra2)) {
        printf("\nA string ""%s"" esta contida na string ""%s"" \n\n", palavra2, palavra1);
    } else {
        printf("\nA string ""%s"" nao esta contida na string ""%s"" \n\n", palavra2, palavra1);
    }
    return 0;
}
