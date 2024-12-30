#ifndef FILA_H
#define FILA_H

typedef struct No{
    int valor;
    struct No* proximo;
}No;

typedef struct Fila{
    No* inicio;
    No* fim;
    int tamanho;
}Fila;

Fila* criaFila();

void enqueue(Fila* fila, int val);

int dequeue(Fila* fila);

int front(Fila* fila);

int isEmpty(Fila* fila);

int size(Fila* fila);

void printFila(Fila* fila);

#endif