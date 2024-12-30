#include <stdio.h>
#include <stdlib.h>
#include "biblioteca/pilha.h"

int sumStack(Pilha* pilha){
    int soma = 0;
    while(pilha->topo != NULL){
        soma += pop(pilha);
    }
    return soma;
}

int main(){
    Pilha* pilha = Stack();
    int qtd, soma;
    scanf("%d", &qtd);

    for(int i = 0; i < qtd; i++){
        int valor;
        scanf("%d", &valor);
        if(valor == 0){
            pop(pilha);
        }else{
            push(pilha, valor);
        }
    }
    soma = sumStack(pilha);
    
    printf("%d\n", soma);

}