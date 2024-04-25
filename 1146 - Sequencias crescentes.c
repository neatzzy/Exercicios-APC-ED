#include <stdio.h>

int main(){
    int x, idx;

    scanf("%d", &x);

    while(x != 0){
        for(idx = 1 ; idx <= x ; idx++){
            printf("%d", idx);
            if (idx == x){
                printf("\n");
            }
            else{
                printf(" ");
            }
        }
        scanf("%d", &x);
    }
    return 0;
}