#include <stdlib.h>
#include <stdio.h>
#include "arvorebinaria.h"

Arvore* criarArvore(){
    Arvore* arvore = (Arvore*)malloc(sizeof(Arvore));
    if(arvore){
        arvore->raiz = NULL;
    }
    return arvore;
}

void liberaNo(No* no){
    if(no){
        liberaNo(no->esquerda);
        liberaNo(no->direita);
        free(no);
    }
    return;
}

void liberaArvore(Arvore* arvore){
    if(arvore){
        liberaNo(arvore->raiz);
        free(arvore);
    }
    return;
}

int totalNos(No* raiz){
    if(!raiz){
        return 0;
    }
    return totalNos(raiz->esquerda) + totalNos(raiz->direita) + 1;
}

int insereNo(Arvore* arvore, int valor){
    if(!arvore){
        return 0;
    }
    No* novo = (No*)malloc(sizeof(No));
    if(!novo){
        return 0;
    }
    novo->valor = valor;
    novo->esquerda = NULL;
    novo->direita = NULL;
    if(!arvore->raiz){
        arvore->raiz = novo;
        return 1;
    }
    No* atual = arvore->raiz;
    No* anterior = NULL;
    while(atual){
        anterior = atual;
        if(valor == atual->valor){
            free(novo);
            return 0;
        }
        if(valor < atual->valor){
            atual = atual->esquerda;
        }else{
            atual = atual->direita;
        }
    }
    if(valor < anterior->valor){
        anterior->esquerda = novo;
    }else{
        anterior->direita = novo;
    }
    return 1;
}

int buscaNo(Arvore* arvore, int valor){
    if(!arvore){
        return 0;
    }
    No* atual = arvore->raiz;
    while(atual){
        if(valor == atual->valor){
            return 1;
        }
        if(valor < atual->valor){
            atual = atual->esquerda;
        }else{
            atual = atual->direita;
        }
    }
    return 0;
}

void preOrdem(No* no){
    if(no){
        printf("%d ", no->valor);
        preOrdem(no->esquerda);
        preOrdem(no->direita);
    }
    return;
}

void emOrdem(No* no){
    if(no){
        emOrdem(no->esquerda);
        printf("%d ", no->valor);
        emOrdem(no->direita);
    }
    return;
}

void posOrdem(No* no){
    if(no){
        posOrdem(no->esquerda);
        posOrdem(no->direita);
        printf("%d ", no->valor);
    }
    return;
}

int alturaArvore(No* raiz){
    if(!raiz){
        return 0;
    }
    int alturaEsquerda = alturaArvore(raiz->esquerda);
    int alturaDireita = alturaArvore(raiz->direita);
    if(alturaEsquerda > alturaDireita){
        return alturaEsquerda + 1;
    }else{
        return alturaDireita + 1;
    }
}

int alturaNo(Arvore* arvore, int valor){
    if (!arvore) {
        return -1;
    }
    int altura = 0;
    No* atual = arvore->raiz;

    while(atual){
        if(valor == atual->valor){
            return altura;
        }
        if(valor < atual->valor){
            atual = atual->esquerda;
        }else{
            atual = atual->direita;
        }
        altura++;
    }
    return -1;
}

int main(){
    int qtdNos, input;
    Arvore* arvore = criarArvore();

    printf("Digite a quantidade de nos que deseja inserir: ");
    scanf("%d", &qtdNos);
    if(qtdNos <= 0){
        goto FIM;
    }

    printf("Digite os valores dos nos: ");
    for(int i = 0; i < qtdNos; i++){
        printf("No %d: ", i+1);
        scanf("%d", &input);
        insereNo(arvore, input);
    }
    printf("Pre-Ordem: ");
    preOrdem(arvore->raiz);
    printf("\n");
    printf("Em-Ordem: ");
    emOrdem(arvore->raiz);
    printf("\n");
    printf("Pos-Ordem: ");
    posOrdem(arvore->raiz);
    printf("\n");
    printf("Total de Nos: %d\n", totalNos(arvore->raiz));
    printf("Altura da Arvore: %d\n", alturaArvore(arvore->raiz));

    while(1){
        int op;
        printf("Deseja buscar um no? (1 - Sim, 0 - Nao): ");
        scanf("%d", &op);
        if(op == 1){
            printf("Digite o valor do no que deseja buscar: ");
            scanf("%d", &input);
            if(buscaNo(arvore, input)){
                printf("No encontrado!\n");
                printf("Altura do No: %d\n", alturaNo(arvore, input));
            }else{
                printf("No nao encontrado!\n");
            }
        }
        else{
            break;
        }
    }
    liberaArvore(arvore);
    FIM: return 0;
}
