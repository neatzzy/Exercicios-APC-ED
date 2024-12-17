#include <stdio.h>

void Preencher(int t){
    int v[1000], i, n = 0;

    for(i = 0 ; i < 1000 ; i++){
        v[i] = n;
        printf("N[%d] = %d\n", i, n);
        n++;
        if(n == t){
            n = 0;
        }
    }
}

int main(){
    int t;
    
    scanf("%d", &t);

    Preencher(t);

    return 0;
}