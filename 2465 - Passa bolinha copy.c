#include <stdio.h>

void LeInput(int q, int m[][q][2]){
    int i, j;

    for(i = 0 ; i < q ; i++){
        for(j = 0 ; j < q ; j++){
                scanf("%d", &m[i][j][0]);
                m[i][j][1] = 0;
        }
    }
}

void printaMatriz(int q, int m[][q][2]){
    int i, j;

    printf("\n");
    
    for(i = 0 ; i < q ; i++){
        for(j = 0 ; j < q ; j++){
                printf("%d ", m[i][j][1]);
        }
        printf("\n");
    }
}

int passaBolinha(int q, int m[][q][2], int i0, int j0){
    int i, j, qtdLev = 1;

    m[i0][j0][1] = 1;
    i = i0;
    j = j0;

    do{
        if(m[i][j][0] <= m[i][j+1][0] && m[i][j+1][1] == 0){
            j++;
            m[i][j][1] = 1;
            qtdLev++;
        }
        else if(m[i][j][0] <= m[i+1][j][0] && m[i+1][j][1] == 0){
            i++;
            m[i][j][1] = 1;
            qtdLev++;
        }
        else if(m[i][j][0] <= m[i][j-1][0] && m[i][j-1][1] == 0){
            j--;
            m[i][j][1] = 1;
            qtdLev++;
        }
        else if(m[i][j][0] <= m[i-1][j][0] && m[i-1][j][1] == 0){
            i--;
            m[i][j][1] = 1;
            qtdLev++;
        }
        else if(m[i][j][0] <= m[i-1][j][0] && m[i-1][j][1] == 1){
            i--;
        }
        else if(m[i][j][0] <= m[i][j-1][0] && m[i][j-1][1] == 1){
            j--;
        }
        else if(m[i][j][0] <= m[i+1][j][0] && m[i+1][j][1] == 1){
            i++;
        }
        else if(m[i][j][0] <= m[i][j+1][0] && m[i][j+1][1] == 1){
            j++;
        }
        else{
            break;
        }
    }while(1);

        return qtdLev;
}

int main(){
    int n, i0, j0;

    scanf("%d", &n);

    int m[n][n][2];

    scanf("%d %d", &i0, &j0);
    i0--;
    j0--;

    LeInput(n, m);

    printf("%d\n", passaBolinha(n, m, i0, j0));

    printaMatriz(n, m);

    return 0;

}