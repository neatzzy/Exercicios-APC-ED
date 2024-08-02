#include <stdio.h>

void LeInput(int v[], int q){
    int i;
    for(i = 0 ; i < q ; i++){
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

int Verifica(int v[], int q){
    int i, mem, falsos = 0;
    mem = v[0];
    for(i = 1 ; i < q ; i++){
        if(v[i] == mem){
            falsos++;
            while(v[i] == mem){
                i++;
            }
        }
        mem = v[i];
    }
    return falsos;
}

int main(){
    int n, m;

    while(1){
    scanf("%d %d", &n, &m);
    if(n == m && n == 0){
        break;
    }
    int v[m];

    LeInput(v, m);
    bubbleSort(v, m);
    printf("%d\n", Verifica(v, m));
    }

    return 0;
}