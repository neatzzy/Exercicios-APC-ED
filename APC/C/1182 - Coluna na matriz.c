#include <stdio.h>

void LeInput(float m[][12]){
    int i, j;

    for(i = 0 ; i < 12 ; i++){
        for(j = 0 ; j < 12 ; j++){
            scanf("%f", &m[i][j]);
        }
    }
}

void Somar(float m[][12], int c, float *soma){
    int i;

    for(i = 0 ; i < 12 ; i++){
        *soma += m[i][c];
    }
}

int main(){
    int coluna;
    float soma = 0, m[12][12];
    char op [1];

    scanf("%d %c", &coluna, op);

    LeInput(m);

    Somar(m, coluna, &soma);

    if(op == "S"){
        printf("%.1f\n", soma);
    }
    else{
        float media = soma / 12;
        printf("%.1f\n", media);
    }

}