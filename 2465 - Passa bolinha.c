#include <stdio.h>

const int d[5] = {0,1,0,-1,0};

int res = 0, m[100][100][2];

void LeInput(int q){
    int i, j;

    for(i = 0 ; i < q ; i++){
        for(j = 0 ; j < q ; j++){
                scanf("%d", &m[i][j][0]);
                m[i][j][1] = 0;
        }
    }
}

void printaMatriz(int q, int m[100][100][2]){
    int i, j;

    printf("\n");

    for(i = 0 ; i < q ; i++){
        for(j = 0 ; j < q ; j++){
            printf("%d ", m[i][j][0]);
        }
        printf("\n");
    }

    printf("\n");

    for(i = 0 ; i < q ; i++){
        for(j = 0 ; j < q ; j++){
            printf("%d ", m[i][j][1]);
        }
        printf("\n");
    }
}

void passaBolinha(int i0, int j0){
    int k, a, b;

    m[i0][j0][1] = 1; 
    res++;

    for(k = 0; k < 4; k++){
        a = i0+d[k]; b = j0+d[k+1];
        if (a >= 1 && a <= 100 && b >= 1 && b <= 100){
            if ((m[a][b][0] >= m[i0][j0][0]) && (m[a][b][1] == 0)){
	        passaBolinha(a, b);
            }
        }
  }
}

int main(){
    int n, i0, j0;

    scanf("%d", &n);

    scanf("%d %d", &i0, &j0);
    i0 --; j0--;

    LeInput(n);

    passaBolinha(i0, j0);

    printaMatriz(n, m);

    printf("%d\n", res);

    return 0;

}