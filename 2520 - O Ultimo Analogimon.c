#include <stdio.h>
#include <stdlib.h>

void preencheMatriz(int n, int m, int matriz[n][m], int *xA, int *yA, int *xP, int *yP);

int main(){
    int n,m;

    while(scanf("%d %d", &n, &m) != EOF){
        int xA, yA, xP, yP, matriz[n][m];
        preencheMatriz(n, m, matriz, &xA, &yA, &xP, &yP);
        printf("%d\n", abs(xA - xP) + abs(yA - yP));
    }

    return 0;
}

void preencheMatriz(int n, int m, int matriz[n][m], int *xA, int *yA, int *xP, int *yP){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &matriz[i][j]);
            if(matriz[i][j] == 2){
                *xA = i;
                *yA = j;
            }
            if(matriz[i][j] == 1){
                *xP = i;
                *yP = j;
            }
        }
    }
} 