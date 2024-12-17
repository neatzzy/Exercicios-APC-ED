#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct No{
    int valor;
    char nome[50];
    struct No* proximo;
}No;

typedef struct Fila{
    No* inicio;
    No* fim;
    No* fim80;
    No* fim60;
    int tamanho;
}Fila;

char tempNome[24];

Fila* criaFila(){
    Fila* fila = (Fila*) malloc(sizeof(Fila));
    fila->inicio = NULL;
    fila->fim = NULL;
    fila->tamanho = 0;
    return fila;
}

void enqueue(Fila* fila, int val){
    No* novo = (No*) malloc(sizeof(No));
    novo->valor = val;
    novo->proximo = NULL;
    strcpy(novo->nome, tempNome);
    if(fila->inicio == NULL){
        fila->inicio = novo;
        fila->fim = novo;
    }else{
        fila->fim->proximo = novo;
        fila->fim = novo;
    }
    fila->tamanho++;
}

void printFila(Fila* fila){
    No* atual = fila->inicio;
    while(atual != NULL){
        printf("%s, ", atual->nome);
        atual = atual->proximo;
    }
}

int main(){
    Fila* fila = criaFila();
    Fila* fila60 = criaFila();
    Fila* fila80 = criaFila();

    int idade;

    while(1){
        printf("Digite o nome do usuario: ");
        scanf("%s", tempNome);
        if(strcmp(tempNome, "fim") == 0){
            break;
        }
        printf("Digite a idade do usuario: ");
        scanf("%d", &idade);
        
        if(idade >= 80){
            enqueue(fila80, idade);
        }else if(idade >= 60){
            enqueue(fila60, idade);
        }else{
            enqueue(fila, idade);
        }
    }

    fila80->fim->proximo = fila60->inicio;
    fila60->fim->proximo = fila->inicio;

    printf("Fila: ");
    printFila(fila80);
    printf("\n");

    return 0;
}