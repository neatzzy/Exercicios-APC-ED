#include <stdio.h>

void LeInput(int q, int vetor[]){
    int i;
    for(i = 0 ; i < q ; i++){
        scanf("%d", &vetor[i]);
    }
}

void bubbleSort(int v[], int n){
    int i, j;
    for(j = 0; j < n; j++){
        for(i = 0; i < n-1; i++){
            if(v[i] > v[i+1]){
                int aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
            }
        }
    }
}

void Frequencia(int v[], int q){
    int mem, sequencia = 1, i;

    mem = v[0];

    for(i = 1 ; i <= q; i++){
        if(v[i] == mem){
            sequencia++;
        }
        else{
            printf("%d aparece %d vez(es)\n", mem, sequencia);
            sequencia = 1;
        }
        mem = v[i];
    }
}

int main(){
    int qtd, i;

    scanf("%d", &qtd);

    int vetor[qtd];

    LeInput(qtd, vetor);

    bubbleSort(vetor, qtd);

    Frequencia(vetor, qtd);

    return 0;
}