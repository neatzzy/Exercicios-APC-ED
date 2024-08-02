#include <stdio.h>

long long int Fibonacci(int n){
    int i;
    long long int v[n];
    v[0] = 0;
    v[1] = 1;
    for(i = 2 ; i <= n ; i++){
        v[i] = v[i-1] + v[i - 2];
    }
    return v[n];
}

int main(){
    int qtd, i, nro;

    scanf("%d", &qtd);

    for(i = 0 ; i < qtd ; i++){
        scanf("%d", &nro);
        printf("Fib(%d) = %lld\n", nro, Fibonacci(nro));
    }
    return 0;
}