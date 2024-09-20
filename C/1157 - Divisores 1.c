#include <stdio.h>

int main(){
    int n, idx;

    scanf("%d", &n);

    for(idx = 1 ; idx <= n ; idx++){
        if(n % idx == 0){
            printf("%d\n", idx);
        }
    }
    return 0;
}