#ifndef PONTO_H
#define PONTO_H

typedef struct {
    float xPonto;
    float yPonto;
} Ponto;


Ponto * criarPonto(float x, float y);
void liberarPonto(Ponto *p);

#endif
