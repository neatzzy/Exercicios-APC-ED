#include <stdio.h>

void LeInput(int q, int v[]){
    int i;

    for(i = 0 ; i < q; i++){
        scanf("%d", &v[i]);
    }
}

void bubbleSort(int v[], int q){
    int i, j;
    for(j = 0; j < q; j++){
        for(i = 0; i < q-1; i++){
            if(v[i] > v[i+1]){
                int aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
            }
        }
    }
}

int Verifica(int q, int c, int v[]){
    int i, faltantes, mem = v[0], unicas = 1;

    for(i = 1 ; i < c; i++){
        if(v[i] != mem){
            unicas++;
        }
        else{
            while(v[i] == v[i+1]){
                i++;
            }
        }
        mem = v[i];
    }
    faltantes = q - unicas;
    return faltantes;
}

int main(){
    int n, m;

    scanf("%d", &n);
    scanf("%d", &m);

    int v[m];

    LeInput(m, v);

    bubbleSort(v, m);

    printf("%d\n", Verifica(n, m, v));

    return 0;
}