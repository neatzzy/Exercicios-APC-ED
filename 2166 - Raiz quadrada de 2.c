#include <stdio.h>

double raiz(double n);

int main(){
    double n;

    scanf("%lf", &n);

    printf("%.10lf\n", raiz(n) + 1);

    return 0;
}

double raiz(double n){
    if(n == 0){
        return 0;
    }
    else{
        return 1 / (2 + raiz(n - 1));
    }
}