#include <stdio.h>

int main(){
    int n, idx, idx2, x, y;

    scanf("%d", &n);
    for(idx = 0 ; idx < n ; idx++){
        int soma = 0;
        scanf("%d %d", &x, &y);
        if((x > y) && (x % 2 != 0)){
            for (idx2 = x - 2; idx2 > y ; idx2 -=2 ){
                soma += idx2;
            }
            
        }
        else if((x > y) && (x % 2 == 0)){
            for (idx2 = x - 1; idx2 > y ; idx2 -=2 ){
                soma += idx2;
            }
            
        }
        else if((y > x) && (y % 2 != 0)){
            for (idx2 = y - 2; idx2 > x ; idx2 -=2 ){
                soma += idx2;
            }
            
        }
        else{
            for (idx2 = y - 1; idx2 > x ; idx2 -=2 ){
                soma += idx2;
        }
    }
    printf("%d\n", soma);
}
    return 0;
}