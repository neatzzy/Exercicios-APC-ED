#include <stdio.h>

int exponencial(int x, int y){
    int i;
    int resultado = x;

    for(i = 2; i <= y; i++){
        resultado = resultado * x;
    }
    return resultado;
}

int main(){
    int x, y;

    scanf("%d %d", &x, &y);

    if(y < 0){
        printf("Ainda nao lidamos com expoentes negativos\n");
        return 0;
    }

    printf("%d\n", exponencial(x, y));

    return 0;
}
