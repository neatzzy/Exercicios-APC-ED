#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

Pilha* Stack(){
    Pilha* pilha = (Pilha*)malloc(sizeof(Pilha));
    pilha->topo = NULL;
    pilha->tamanho = 0;
    return pilha;
}

void push(Pilha* pilha, int valor){
    No* novo = (No*)malloc(sizeof(No));
    novo->valor = valor;
    novo->anterior = pilha->topo;
    pilha->topo = novo;
    pilha->tamanho++;
}

int pop(Pilha* pilha){
    if(isEmpty(pilha)){
        printf("Pilha vazia\n");
        return -1;
    }
    No* aux = pilha->topo;
    int valor = aux->valor;
    pilha->topo = aux->anterior;
    free(aux);
    pilha->tamanho--;
    return valor;
}

int peek(Pilha* pilha){
    if(isEmpty(pilha)){
        printf("Pilha vazia\n");
        return -1;
    }
    return pilha->topo->valor;
}

int isEmpty(Pilha* pilha){
    return pilha->tamanho == 0 ? 1 : 0;
}