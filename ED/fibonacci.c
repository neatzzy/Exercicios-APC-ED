#include <stdio.h>

unsigned long long int fib(int n, unsigned long long int vec[]){
    if (n < 2){
        vec[n] = n;
        return n;
        }
    if (vec[n] != 0){
        return vec[n];
        }
    else{
        vec[n] = fib(n - 1, vec) + fib(n - 2, vec);
        return vec[n];
        }
    }

int main(){
    int nro;
    unsigned long long int vec[999999] = { 0 };
    scanf("%d", &nro);
    printf("fib(%d) = %llu\n", nro, fib(nro, vec));
    }