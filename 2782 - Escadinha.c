#include <stdio.h>

void LeInput(int v[], int q){
    int i;

    for(i = 0 ; i < q ; i++){
        scanf("%d", &v[i]);
    }
}

long Escadinha(int v[], int q){
    int i, escadinhas = 1;

    for(i = 2 ; i < q ; i++){
        if((v[i] - v[i-1]) != (v[i-1] - v[i-2])){
            escadinhas++;
        }
    }

    return escadinhas;
}

int main(){
    int n;

    scanf("%d", &n);

    int v[n];

    LeInput(v, n);

    printf("%ld\n", Escadinha(v, n));

    return 0;
}