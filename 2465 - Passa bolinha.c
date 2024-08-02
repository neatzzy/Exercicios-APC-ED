#include <stdio.h>

int qtdLev = 0;

void LeInput(int q, int m[][q][2]){
    for(int i = 0 ; i < q ; i++){
        for(int j = 0 ; j < q ; j++){
                scanf("%d", &m[i][j][0]);
                m[i][j][1] = 0;
        }
    }
}

void passaBolinha(int q, int m[][q][2], int i, int j){
    int a, b, d[5] = {0,1,0,-1,0};

    qtdLev++;
    m[i][j][1] = 1;
    for(int k = 0; k < 4; k++ ){
        a = i+d[k]; b = j+d[k+1];
        if (a >= 0 && a < q && b >= 0 && b < q){
            if ((m[a][b][0] >= m[i][j][0]) && (m[a][b][1] == 0)){
	        passaBolinha(q, m, a, b);
            }
        }
    }
}
    
int main(){
    int n, i0, j0;

    scanf("%d", &n);

    int m[n][n][2];

    scanf("%d %d", &i0, &j0);
    i0--;
    j0--;

    LeInput(n, m);

    passaBolinha(n, m, i0, j0);

    printf("%d\n", qtdLev);

    return 0;

}