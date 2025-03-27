#ifndef ARVOREBINARIA_H
#define ARVOREBINARIA_H

typedef struct No{
    int valor;
    struct No* esquerda;
    struct No* direita;
    }No;

typedef struct Arvore{
    No* raiz;
    }Arvore;

Arvore* criarArvore();

void liberaNo(No* no);

void liberaArvore(Arvore* arvore);

int totalNos(No* raiz);

int alturaArvore(No* raiz);

int alturaNo(Arvore* arvore, int valor);

int insereNo(Arvore* arvore, int valor);

int removeNo(Arvore* arvore, int valor);

int buscaNo(Arvore* arvore, int valor);

void preOrdem(No* no);

void emOrdem(No* no);

void posOrdem(No* no);

#endif
