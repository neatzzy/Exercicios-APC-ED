#include <stdio.h>

int main(){

    int m, n, idx;
    int soma = 0;

    scanf("%d %d",&m, &n);
    
    do{
        if (m > n){
        for(idx = n ; idx <= m ; idx++){
            printf("%d ", idx);
            soma += idx;
        }
    }
    else{
        for(idx = m ; idx <= n ; idx++){
            printf("%d ", idx);
            soma += idx;
        }
    }
    printf("Sum=%d\n", soma);
    soma = 0;
    scanf("%d %d",&m, &n);
    }while ((m > 0) && (n > 0));
    
    return 0;
}