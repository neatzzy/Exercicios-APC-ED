#include <stdio.h>

void LeInput(int q,int v[]){
    int i;
    for(i = 0 ; i < q ; i++){
        scanf("%d", &v[i]);
    }
}

int Verifica(int ap, int q, int v[]){
    int i, qtd = 0;
    for(i = 0 ; i < q ; i++){
        if((ap * v[i]) >= 40000000){
            qtd++;
        }
    }
    return qtd;
}

int main(){
    int a, n;

    scanf("%d", &a);
    scanf("%d", &n);

    int v[n];

    LeInput(n, v);

    printf("%d\n", Verifica(a, n, v));

    return 0;
}