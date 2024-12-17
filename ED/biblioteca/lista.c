#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

Lista* criaLista(){
    Lista* lista = (Lista*) malloc(sizeof(Lista));
    lista->inicio = NULL;
    lista->tamanho = 0;
    return lista;
}

void add(Lista *lista, int val){
    No* new = (No*) malloc(sizeof(No));
    new->valor = val;
    new->proximo = lista->inicio;
    lista->tamanho++;
}

void append(Lista* lista, int val){
    No* new = (No*) malloc(sizeof(No));
    new->valor = val;
    new->proximo = NULL;

    if(lista->inicio == NULL){
        lista->inicio = new;
    }
    else{
        No* atual = lista->inicio;
        while(atual->proximo != NULL){
            atual = atual->proximo;
        }
        atual->proximo = new;
    }
    lista->tamanho++;
}

int removeLista(Lista* lista, int val){
    if (lista->inicio == NULL) return 0;

    No* atual = lista->inicio;
    No* anterior = NULL;

    while(atual != NULL){
        if(atual->valor == val){
            if(anterior == NULL){
                lista->inicio = atual->proximo;
            }
            else{
                anterior->proximo = atual->proximo;
            }
            free(atual);
            lista->tamanho--;
            return 1;
        }
        anterior = atual;
        atual = atual->proximo;
    }
    return 0;
}
