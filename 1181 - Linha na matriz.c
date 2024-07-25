#include <stdio.h>

void LeInput(float m[][12]){
    int i, j;

    for(i = 0 ; i < 12 ; i++){
        for(j = 0 ; j < 12 ; j++){
            scanf("%f", &m[i][j]);
        }
    }
}

void Somar(float m[][12], int l, float *soma){
    int j;

    for(j = 0 ; j < 12 ; j++){
        *soma += m[l][j];
    }
}

int main(){
    int linha;
    float soma = 0, m[12][12];
    char op [1];

    scanf("%d %c", &linha, op);

    LeInput(m);

    Somar(m, linha, &soma);

    if(op == "S"){
        printf("%.1f\n", soma);
    }
    else{
        float media = soma / 12;
        printf("%.1f\n", media);
    }

}