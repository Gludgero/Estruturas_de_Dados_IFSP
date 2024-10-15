typedef struct pontoCartesiano PTc;

// Construtor
PTc *construtorPTc(float x, float y);

// Setter
void setterPTc(PTc *p, float x, float y);

//Getter
void getterPTc(PTc *p, float *x, float *y);

// Libera o ponteiro
void liberaPTc(PTc *p);

// Calcula a distância entre dois pontos
float distanciaPTc(PTc *p1, PTc *p2);
