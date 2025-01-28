#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

Lista* criaLista(){
    Lista* lista = (Lista*)malloc(sizeof(Lista));
    lista->inicio = NULL;
    lista->tamanho = 0;
    return lista;
    }

void add(Lista* lista, int val){
    No* novo = (No*)malloc(sizeof(No));

    novo->valor = val;
    novo->proximo = lista->inicio;
    lista->inicio = novo;
    lista->tamanho++;
    }

void append(Lista* lista, int val){
    No* novo = (No*)malloc(sizeof(No));
    No* aux = lista->inicio;

    novo->valor = val;
    novo->proximo = NULL;

    if(isEmpty(lista)){
        lista->inicio = novo;
    }else{
        while(aux->proximo != NULL){
            aux = aux->proximo;
        }
        aux->proximo = novo;
    }
    lista->tamanho++;
    }

int removeLista(Lista* lista, int val){
    if (isEmpty(lista)) return 0;

    No* aux = lista->inicio;
    No* anterior = NULL;

    while(aux != NULL){
        if(aux->valor == val){
            if(anterior == NULL){
                lista->inicio = aux->proximo;
            }
            else{
                anterior->proximo = aux->proximo;
            }
            free(aux);
            lista->tamanho--;
            return 1;
        }
        anterior = aux;
        aux = aux->proximo;
    }
    return 0;
}

int search(Lista* lista, int val){
    if (isEmpty(lista)) return 0;

    No* aux = lista->inicio;

    while(aux != NULL){
        if(aux->valor == val){
            return 1;
        }
        aux = aux->proximo;
    }
    return 0;
    }

int isEmpty(Lista* lista){
    return lista->tamanho == 0;
}

int index(Lista* lista, int val){
    if (isEmpty(lista)) return -1;

    No* aux = lista->inicio;
    int i = 0;

    while(aux != NULL){
        if(aux->valor == val){
            return i;
        }
        aux = aux->proximo;
        i++;
    }
    return -1;
}

int insert(Lista* lista, int index, int val){
    if(index < 0 || index > lista->tamanho) return 0;

    No* novo = (No*)malloc(sizeof(No));
    No* aux = lista->inicio;
    No* anterior = NULL;
    int i = 0;

    novo->valor = val;

    while(i < index){
        anterior = aux;
        aux = aux->proximo;
        i++;
    }

    if(anterior == NULL){
        novo->proximo = lista->inicio;
        lista->inicio = novo;
    }else{
        novo->proximo = aux;
        anterior->proximo = novo;
    }
    lista->tamanho++;
    return 1;
}

int pop(Lista* lista){
    if (isEmpty(lista)) return -1;

    No* aux = lista->inicio;
    No* anterior = NULL;
    int val;

    while(aux->proximo != NULL){
        anterior = aux;
        aux = aux->proximo;
    }

    if(anterior == NULL){
        lista->inicio = NULL;
    }
    else{
        anterior->proximo = NULL;
    }

    val = aux->valor;
    free(aux);
    lista->tamanho--;
    return val;
}

int popIndex(Lista* lista, int index){
    if (isEmpty(lista) || index < 0 || index >= lista->tamanho) return -1;

    No* aux = lista->inicio;
    No* anterior = NULL;
    int i = 0;
    int val;

    while(i < index){
        anterior = aux;
        aux = aux->proximo;
        i++;
    }

    if(anterior == NULL){
        lista->inicio = aux->proximo;
    }
    else{
        anterior->proximo = aux->proximo;
    }

    val = aux->valor;
    free(aux);
    lista->tamanho--;
    return val;
}