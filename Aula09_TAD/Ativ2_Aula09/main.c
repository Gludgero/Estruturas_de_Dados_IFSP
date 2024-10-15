#include <stdio.h>
#include <stdlib.h>
#include "Ativ2.h"

int main()
{
    float d = 0, retornaX, retornaY;
    PTc *p = NULL, *q = NULL;

    // PTc r;

    p = construtorPTc(10, 21);
    q = construtorPTc(7, 25);
    d = distanciaPTc(p, q);

   // p->y = 3;
    // q.x = 2.34;

    printf("Distancia entre os pontos caretesianos: %f\n", d);

    setterPTc(q, 15, -2);
    d = distanciaPTc(p, q);
    printf("\nNova Distancia entre os pontos caretesianos: %f\n", d);

    getterPTc(p, &retornaX, &retornaY);
    printf("\nValores armazenados em p: X = %.2f e Y = %.2f\n", retornaX, retornaY);

    getterPTc(q, &retornaX, &retornaY);
    printf("\nValores armazenados em q: X = %.2f e Y = %.2f\n\n", retornaX, retornaY);

    liberaPTc(q);
    liberaPTc(p);
    system("PAUSE");
    return 0;
}
