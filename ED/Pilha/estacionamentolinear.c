#include <stdio.h>
#include <stdlib.h>

typedef struct No{
    int saida;
    struct No* anterior;
} No;

typedef struct Pilha{
    No* topo;
    int tamanho;
}Pilha;

Pilha* Stack(){
    Pilha* pilha = (Pilha*)malloc(sizeof(Pilha));
    pilha->topo = NULL;
    pilha->tamanho = 0;
    return pilha;
}

void push(Pilha* pilha, int entrada, int saida){
    No* novo = (No*)malloc(sizeof(No));
    novo->saida = saida;
    novo->anterior = pilha->topo;
    pilha->topo = novo;
    pilha->tamanho++;
}

int pop(Pilha* pilha){
    No* aux = pilha->topo;
    pilha->topo = aux->anterior;
    free(aux);
    pilha->tamanho--;
    return 0;
}

int isEmpty(Pilha* pilha){
    return pilha->topo == NULL ? 1 : 0;
}

int main(){
    int casos;
    Pilha* pilha = Stack();
    scanf("%d", &casos);

    for(int i = 0 ; i < casos ; i++){
        int motoristas, capacidade, flag = 1;
        scanf("%d %d", &motoristas, &capacidade);

        int entrada, saida;

        for(int j = 0 ; j < motoristas ; j++){
            scanf("%d %d", &entrada, &saida);
            if(!flag) continue;
            while(!isEmpty(pilha) && pilha->topo->saida <= entrada){
                pop(pilha);
            }
            if(pilha->tamanho >= capacidade){
                flag = 0;
            }else{
                if(isEmpty(pilha)) push(pilha, entrada, saida);
                else{
                    if(pilha->topo->saida > saida){
                        push(pilha, entrada, saida);
                    }
                    else{
                        flag = 0;
                    }
                }
            }
        }
        flag ? printf("Sim\n") : printf("Nao\n");

        while(!isEmpty(pilha)){
            pop(pilha);
        }
    }
    return 0;
}