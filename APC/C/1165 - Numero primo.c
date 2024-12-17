#include <stdio.h>

 int primo(int nro){
    int i;
    for(i = 2; i * i <= nro; i++){
        if(nro % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int i, n, qtd, resultado;

    scanf("%d", &qtd);

    for(i = 0 ; i < qtd ; i++){

        scanf("%d", &n);

        if(primo(n) == 1){
            printf("%d eh primo\n", n);
        }
        else{
            printf("%d nao eh primo\n", n);
        }
    }
}