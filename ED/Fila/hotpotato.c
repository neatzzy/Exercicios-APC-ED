#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char tempNome[20];

typedef struct No{
    int valor;
    char nome[20];
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

int main(){
    Fila* batata = criaFila();
    int qtd, rodadas;

    printf("Digite a quantidade de pessoas: ");
    scanf("%d", &qtd);

    printf("Digite os %d nomes: ", qtd);  

    for(int i = 0; i < qtd; i++){
        scanf("%s", tempNome);
        enqueue(batata, i);
    }

    while(batata->tamanho > 1){
        printf("Digite a quantidade de rodadas (%d restantes): ", (batata->tamanho - 1));
        scanf("%d", &rodadas);
        for(int i = 0; i < rodadas; i++){;
            strcpy(tempNome, batata->inicio->nome);
            enqueue(batata, dequeue(batata));
        }
        dequeue(batata);
    }

    printf("O vencedor foi: %s\n", batata->inicio->nome);

    return 0;
}