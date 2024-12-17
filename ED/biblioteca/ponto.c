#include "ponto.h"
#include <stdlib.h>
#include <stdio.h>

// Função que cria um ponto
Ponto * criarPonto(float x, float y){
    Ponto *p = (Ponto *) malloc(sizeof(Ponto));
    if(p != NULL){
        p->xPonto = x;
        p->yPonto = y;
    }
    return p;
}

// Função que libera um ponto
void liberarPonto(Ponto *p){
    free(p);
}