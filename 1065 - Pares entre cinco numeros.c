#include <stdio.h>

int main(){
    int i, nro, pares = 0;

    for(i = 1; i <= 5; i++){
        scanf("%d", &nro);
        if(nro % 2 == 0){
            pares++;
        }
    }
    printf("%d valores pares\n", pares);

    return 0;
}