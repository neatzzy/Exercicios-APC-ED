#include <stdio.h>

int main(){

    int nro, idx;

    scanf("%d", &nro);

    for(idx = 1 ; idx <= 10000 ; idx++){
        if((idx % nro) == 2){
            printf("%d\n", idx);
        }
    }
    return 0;
}