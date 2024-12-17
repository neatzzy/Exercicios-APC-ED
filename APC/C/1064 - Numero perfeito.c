#include <stdio.h>
 
int main() {
    int nro, n, idx, idx2, soma;

    scanf("%d", &n);
    
    for(idx = 0; idx < n ; idx++){
        soma = 0;
        scanf("%d", &nro);
        for (idx2 = 1; idx2 < nro; idx2++){
            if(nro % idx2 == 0){
                soma += idx2;
            }
        }
        if(soma == nro){
            printf("%d eh perfeito\n", nro);
        }
        else{
            printf("%d nao eh perfeito\n", nro);
        }
    }
    return 0;
}