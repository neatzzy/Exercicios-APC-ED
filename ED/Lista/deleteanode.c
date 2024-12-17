#include <stdio.h>
#include <stdlib.h>

typedef struct No{
    int valor;
    struct No* proximo;
} No;

typedef struct Lista{
    No* inicio;
    int tamanho;
}Lista;


Lista* criaLista(){
    Lista* lista = (Lista*) malloc(sizeof(Lista));
    lista->inicio = NULL;
    lista->tamanho = 0;
    return lista;
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

int popPos(Lista* l, int pos) {
    if (pos < 0 || pos >= l->tamanho) return -1;

    No* atual = l->inicio;
    No* anterior = NULL;

    for (int i = 0; i < pos; i++) {
        anterior = atual;
        atual = atual->proximo;
    }

    int valor = atual->valor;

    if (anterior == NULL) {
        l->inicio = atual->proximo;
    } else {
        anterior->proximo = atual->proximo;
    }

    free(atual);
    l->tamanho--;
    return valor;
}

void printaLista(Lista* lista){
    No* atual = lista->inicio;
    while(atual != NULL){
        printf("%d ", atual->valor);
        atual = atual->proximo;
    }
    printf("\n");
}

int main(){
    Lista* list = criaLista();
    int qtd, rmv;

    scanf("%d", &qtd);

    for(int i = 0 ; i < qtd ; i++){
        int input;
        scanf("%d", &input);
        append(list, input);
    }
    scanf("%d", &rmv);

    popPos(list, rmv);

    printaLista(list);

    return 0;
}