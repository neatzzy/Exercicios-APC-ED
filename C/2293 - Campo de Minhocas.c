#include <stdio.h>

int main(){
    int n, m, maior = 0;

    scanf("%d %d", &n, &m);

    int mtx[n][m];

    for(int i = 0 ; i < n ; i++){
        int soma = 0;
        for(int j = 0 ; j < m ; j++){
            scanf("%d", &mtx[i][j]);
            soma += mtx[i][j];
        }
        if(soma >= maior){
            maior = soma;
        }
    }

    for(int i = 0 ; i < m ; i++){
        int soma = 0;
        for(int j = 0 ; j < n ; j++){
            soma += mtx[j][i];
        }
        if(soma >= maior){
            maior = soma;
        }
    }
    printf("%d\n", maior);

    return 0;

}