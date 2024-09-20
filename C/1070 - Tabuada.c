#include <stdio.h>

int main(){

    int idx, nro, mult;

    scanf("%d", &nro);

    for(idx = 1 ; idx <= 10 ; idx++){
        mult = idx * nro;
        printf("%d x %d = %d\n", idx, nro, mult);
    }
    return 0;
}