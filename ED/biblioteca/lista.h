#ifndef LISTA_H
#define LISTA_H

typedef struct No{
    int valor;
    struct No* proximo;
    } No;

typedef struct Lista{
    No* inicio;
    int tamanho;
    }Lista;

Lista* criaLista();

void add(Lista* lista, int val);

void append(Lista* lista, int val);

int removeLista(Lista* lista, int val);

int search(Lista* lista, int val);

int isEmpty(Lista* lista);

int indexLista(Lista* lista, int val);

int insert(Lista* lista, int index, int val);

int pop(Lista* lista);

int popIndex(Lista* lista, int index);

void printLista(Lista* lista);

#endif