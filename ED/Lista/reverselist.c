#include <stdio.h>
#include <stdlib.h>

typedef struct No{
    int valor;
    struct No* proximo;
}No;

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
    No* novo = (No*) malloc(sizeof(No));
    novo->valor = val;
    novo->proximo = NULL;
    if(lista->inicio == NULL){
        lista->inicio = novo;
    }else{
        No* aux = lista->inicio;
        while(aux->proximo != NULL){
            aux = aux->proximo;
        }
        aux->proximo = novo;
    }
    lista->tamanho++;
}

int insert(Lista* lista, int index, int val){
    if(index < 0 || index > lista->tamanho){
        return 0;
    }
    No* novo = (No*) malloc(sizeof(No));
    novo->valor = val;
    if(index == 0){
        novo->proximo = lista->inicio;
        lista->inicio = novo;
    }else{
        No* aux = lista->inicio;
        for(int i = 0 ; i < index - 1 ; i++){
            aux = aux->proximo;
        }
        novo->proximo = aux->proximo;
        aux->proximo = novo;
    }
    lista->tamanho++;
    return 1;
}

void printLista(Lista* lista){
    No* aux = lista->inicio;
    while(aux != NULL){
        printf("%d ", aux->valor);
        aux = aux->proximo;
    }
    printf("\n");
}

int main(){
    int testes;
    scanf("%d", &testes);

    for(int i = 0 ; i < testes ; i++){
        int tamanho;
        scanf("%d", &tamanho);

        Lista* listaNormal = criaLista();
        Lista* listaInvertida = criaLista();

        for(int j = 0 ; j < tamanho ; j++){
            int val;
            scanf("%d", &val);
            append(listaNormal, val);
        }

        No* aux = listaNormal->inicio;
        while(aux != NULL){
            insert(listaInvertida, 0, aux->valor);
            aux = aux->proximo;
        }

        printLista(listaInvertida);

    }
    return 0;
}