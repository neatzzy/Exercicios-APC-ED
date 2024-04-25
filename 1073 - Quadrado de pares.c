#include <stdio.h>

int main(){

    int nro, idx, quad;

    scanf("%d", &nro);

    for(idx = 2 ; idx <= nro ; idx += 2){
        quad = idx*idx;
        printf("%d^2 = %d\n", idx, quad);
    }

    return 0;
}