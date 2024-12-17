#include <stdio.h>
#include <stdlib.h>

typedef struct No{
    int valor;
    struct No* proximo;
}No;

typedef struct Fila{
    No* inicio;
    No* fim;
    int tamanho;
}Fila;

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
    return fila->inicio->valor;
}

int main(){
    int testes;
    Fila* fila1 = criaFila();
    Fila* fila2 = criaFila();

    scanf("%d", &testes);

    for(int i = 0 ; i < testes ; i++){
        int inputs;
        scanf("%d", &inputs);
        int arr[inputs];
        arr[0] = 0;

        for(int j = 0 ; j < inputs ; j++){
            int val;
            scanf("%d", &val);
            enqueue(fila1, val);
        }
        for(int j = 0 ; j < inputs ; j++){
            int val;
            scanf("%d", &val);
            enqueue(fila2, val);
        }

        int k = 0;

        while(!isEmpty(fila1) && !isEmpty(fila2)){
            if(){}
        }
        for(int j = 0 ; j < inputs ; j++){
            printf("%d ", arr[j]);
        }
        printf("\n");
    }
    return 0;
}