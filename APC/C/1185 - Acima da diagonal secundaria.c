#include <stdio.h>

void LeInput(float m[][12]){
    int i, j;

    for(i = 0 ; i < 12 ; i++){
        for(j = 0 ; j < 12 ; j++){
            scanf("%f", &m[i][j]);
        }
    }
}

int Somar(float m[][12], float *soma){
    int i, j, jFinal = 11, qtd = 0;

    for(i = 0 ; i < 11 ; i++){
        for(j = 0 ; j < jFinal ; j++){
            *soma += m[i][j];
            qtd++;
        }
        jFinal--;
    }
    return qtd;   
}

int main(){
    int termos;
    float soma = 0, m[12][12];
    char op [1];

    scanf("%c", op);

    LeInput(m);

    termos = Somar(m, &soma);

    if(op == "S"){
        printf("%.1f\n", soma);
    }
    else{
        float media = soma / termos;
        printf("%.1f\n", media);
    }

}