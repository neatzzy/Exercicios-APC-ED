#include <stdio.h>


 int teste(int n){
    int i, soma = 0;
    for(i = 1 ; i <= n/2 ; i++){
        if(n % i == 0){
        soma += i;
        }
    }
    return soma;
 }

int main(){
    int i, n, qtd, resultado;

    scanf("%d", &qtd);

    for(i = 0 ; i < qtd ; i++){

        scanf("%d", &n);

        resultado = teste(n);

        if(resultado == n){
            printf("%d eh perfeito\n", n);
        }
        else{
            printf("%d nao eh perfeito\n", n);
        }
    }
}