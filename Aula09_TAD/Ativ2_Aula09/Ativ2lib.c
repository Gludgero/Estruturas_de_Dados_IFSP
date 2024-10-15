#include <stdio.h>
#include <stdlib.h>
#include "Ativ2.h"
#include <math.h>

struct pontoCartesiano{
    float x;
    float y;
};

PTc *construtorPTc(float x, float y){
    PTc *p = (PTc*) malloc (sizeof(PTc));
    if(p!=NULL){
        p->x = x;
        p->y = y;
    }
    return p;
}

// Setter
void setterPTc(PTc *p, float x, float y){
    p->x = x;
    p->y = y;
}

//Getter
void getterPTc(PTc *p, float *x, float *y){
    *x = p->x;
    *y = p->y;
}

// Libera o ponteiro
void liberaPTc(PTc *p){
    free(p);
}

// Calcula a distância entre dois pontos
float distanciaPTc(PTc *p1, PTc *p2){
    float dx = p1->x - p2->x;
    float dy = p1->y - p2->y;
    return sqrt(dx * dx + dy * dy);
}
