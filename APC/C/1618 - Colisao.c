#include <stdio.h>

void preencheMatriz(int matriz[10]);

void Teste(int matriz[10]);
 
int main() {
    int n, matriz[10];

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        preencheMatriz(matriz);
        Teste(matriz);
    }

    return 0;
}

void preencheMatriz(int matriz[10]) {
    for (int i = 0; i < 10; i++) {
            scanf("%d", &matriz[i]);
    }
}

void Teste(int matriz[10]) {
        if ((matriz[8] >= matriz[0]) && (matriz[8] <= matriz[2]) && (matriz[8] <= matriz[4]) && (matriz[8] >= matriz[6]) && (matriz[9] >= matriz[1]) && (matriz[9] >= matriz[3]) && (matriz[9] <= matriz[5]) && (matriz[9] <= matriz[7])) {
            printf("1\n");
        }
        else{
            printf("0\n");
        }
}