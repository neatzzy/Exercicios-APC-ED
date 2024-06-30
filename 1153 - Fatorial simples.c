#include <stdio.h>

int fatorial(int nro){
    int i;
    for(i = 1; nro > 1; nro--){
        i = i * nro;
    }
    return i;
}

int main(){
    int n, resultado;

    scanf("%d", &n);

    resultado = fatorial(n);

    printf("%d\n", resultado);
    
    return 0;
}