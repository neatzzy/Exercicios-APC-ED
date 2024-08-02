#include <stdio.h>

void preencheMatriz(int n, int m, int matriz[n][m]);

void achaSabre(int n, int m, int matriz[n][m]);

int main(){
    int n,m;

    scanf("%d %d", &n, &m);

    int matriz[n][m];

    preencheMatriz(n, m, matriz);

    achaSabre(n, m, matriz);

    return 0;
}

void preencheMatriz(int n, int m, int matriz[n][m]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
}

void achaSabre(int n, int m, int matriz[n][m]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(matriz[i][j] == 42){
                if(i > 0 && i < n - 1 && j > 0 && j < m - 1){
                    if(matriz[i - 1][j] == 7 && matriz[i + 1][j] == 7 && matriz[i][j - 1] == 7 && matriz[i][j + 1] == 7 && matriz[i - 1][j - 1] == 7 && matriz[i - 1][j + 1] == 7 && matriz[i + 1][j - 1] == 7 && matriz[i + 1][j + 1] == 7){
                        printf("%d %d\n", i + 1, j + 1);
                        return;
                    }
                }
            }
        }
    }
    printf("0 0\n");
}
