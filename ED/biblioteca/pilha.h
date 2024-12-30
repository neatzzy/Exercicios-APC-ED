#ifndef PILHA_H
#define PILHA_H

typedef struct No{
    int valor;
    struct No* anterior;
} No;

typedef struct Pilha{
    No* topo;
    int tamanho;
}Pilha;

Pilha* Stack();

void push(Pilha* pilha, int valor);

int pop(Pilha* pilha);

int peek(Pilha* pilha);

int isEmpty(Pilha* pilha);

#endif