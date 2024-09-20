#include <stdio.h>

int somapares(int nro){
    int i, soma = 0;

    if(nro % 2 == 0){
        for(i = 0 ; i < 5 ; i++){
            soma += nro;
            nro += 2;
        }
    }
    else{
        for (i = 0; i < 5; i++){
            soma += nro + 1;
            nro += 2;
        }
    }
    return soma;
}

int main(){
    int i, n;

    while(1){
        scanf("%d", &n);
        if(n == 0){
            break;
        }
        printf("%d\n", somapares(n));
    }
    return 0;
}