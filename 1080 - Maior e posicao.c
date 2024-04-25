#include <stdio.h>

int main(){
    int idx, nro;
    int maior = 0;
    int pos = 0;

    for(idx = 1 ; idx <= 100 ; idx++){
        scanf("%d", &nro);
        if(nro >= maior){
            maior = nro;
            pos = idx;
        }
    }
    printf("%d\n%d\n", maior, pos);
    return 0;
}