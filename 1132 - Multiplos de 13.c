#include <stdio.h>

int main(){

    int x, y, idx, soma = 0;

    scanf("%d %d", &x ,&y);

    if(x > y){
        for(idx = y ; idx <= x ; idx++){
            if (idx % 13 != 0){
                soma += idx;
            }   
        }
    }
    else{
        for(idx = x ; idx <= y ; idx++){
            if (idx % 13 != 0){
                soma += idx;
            }   
    }
}
    printf("%d\n", soma);
    return 0;
}