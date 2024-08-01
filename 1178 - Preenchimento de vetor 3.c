#include <stdio.h>

void Preenche(double x){
    double v[100] = {x};
    int i;

    for(i = 0; i < 100 ; i++){
        printf("N[%d] = %.4lf\n", i, v[i]);
        v[i+1] = v[i] / 2;
    }
}

int main(){
    double x;

    scanf("%lf", &x);

    Preenche(x);

    return 0;
}