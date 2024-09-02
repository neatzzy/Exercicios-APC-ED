#include <stdio.h>

int granizo(int n, int *maior){
    if(n > *maior){
        *maior = n;
    }

    if(n == 1){
        return 1;
    }
    else if(n % 2 == 0){
        return 1 + granizo(n/2, maior);
    }
    else{
        return 1 + granizo(3*n + 1, maior);
    }
}

int main(){
    int h;

    while(scanf("%d", &h) && h != 0){
        int maior = 0;

        granizo(h, &maior);

        printf("%d\n", maior);
    }
    return 0;
}