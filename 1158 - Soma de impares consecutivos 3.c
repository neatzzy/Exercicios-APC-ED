#include <stdio.h>

int somapares(int x, int y){
    int i, soma = 0;

    if(x % 2 == 0){
        x++;
        for(i = 0; i < y; i++){
            soma += x;
            x += 2;
        }
    }
    else{
        for(i = 0; i < y; i++){
            soma += x;
            x += 2;
        }
    }
    return soma;
}

int main(){
    int i, x, y, qtd, resultado;

    scanf("%d", &qtd);

    for(i = 0; i < qtd; i++){
        scanf("%d %d", &x, &y);

        resultado = somapares(x, y);

        printf("%d\n", resultado);
    }

    return 0;
}