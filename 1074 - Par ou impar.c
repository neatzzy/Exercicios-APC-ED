#include <stdio.h>

int main(){

    int n, nro, idx;

    scanf("%d", &n);

    for(idx = 1; idx <= n ; idx++){
        scanf("%d", &nro);

        if (nro == 0){
            printf("NULL\n");
        }
        else if((nro % 2) == 0){
            if(nro > 0){
                printf("EVEN POSITIVE\n");
            }
            else{
                printf("EVEN NEGATIVE\n");
            }
        }
        else{
            if (nro > 0){
                printf("ODD POSITIVE\n");
            }
            else{
                printf("ODD NEGATIVE\n");
            }
        }
    }
    return 0;
}