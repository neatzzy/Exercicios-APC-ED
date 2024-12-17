#include <stdio.h>

int main(){
    int inicio, fim, tempo;

    scanf("%d %d", &inicio, &fim);

    if (inicio > fim){
        tempo = (24 - inicio) + fim;
    }
    else if (inicio == fim){
        tempo = 24;
    }
    else if (fim > inicio){
        tempo = fim - inicio;
    }
    printf("O JOGO DUROU %d HORA(S)\n", tempo);
    return 0;
}
