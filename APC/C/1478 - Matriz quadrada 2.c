#include <stdio.h>

void preencheMatriz(int q, int m[][q]) {
    for (int i = 0; i < q; i++) {
        for (int j = 0; j < q; j++) {
            if (i <= j) {
                m[i][j] = j - i + 1;
            } else {
                m[i][j] = i - j + 1;
            }
        }
    }
}

void printaMatriz(int q, int m[][q]) {
    for (int i = 0; i < q; i++) {
        for (int j = 0; j < q; j++) {
            if (j == q - 1) {
                printf("%3d", m[i][j]);
            } else {
                printf("%3d ", m[i][j]);
            }
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int n;

    while (scanf("%d", &n) && n != 0) {
        int m[n][n];
        preencheMatriz(n, m);
        printaMatriz(n, m);
    }

    return 0;
}