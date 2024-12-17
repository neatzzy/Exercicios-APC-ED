#include "fila.h"
#include <stdlib.h>
#include <stdio.h>

Fila* criaFila(){
    Fila* fila = (Fila*) malloc(sizeof(Fila));
    fila->inicio = NULL;
    fila->fim = NULL;
    fila->tamanho = 0;
    return fila;
}

int isEmpty(Fila* fila){
    return fila->tamanho == 0 ? 1 : 0;
}

void enqueue(Fila* fila, int val){
    No* novo = (No*) malloc(sizeof(No));
    novo->valor = val;
    novo->proximo = NULL;
    if(fila->inicio == NULL){
        fila->inicio = novo;
        fila->fim = novo;
    }else{
        fila->fim->proximo = novo;
        fila->fim = novo;
    }
    fila->tamanho++;
}

int dequeue(Fila* fila){
    if(isEmpty(fila)){
        printf("Fila vazia\n");
        return -1;
    }
    No* aux = fila->inicio;
    int val = aux->valor;
    fila->inicio = fila->inicio->proximo;
    free(aux);
    fila->tamanho--;
    return val;
}

int front(Fila* fila){
    if(isEmpty(fila)){
        printf("Fila vazia\n");
        return -1;
    }
    return fila->inicio->valor;
}

int size(Fila* fila){
    return fila->tamanho;
}

void printFila(Fila* fila){
    No* atual = fila->inicio;
    while(atual != NULL){
        printf("%d ", atual->valor);
        atual = atual->proximo;
    }
    printf("\n");
}