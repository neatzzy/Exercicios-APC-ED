#include <stdio.h>

void Printa(int q){
    int i, v[10];
    for(i = 0 ; i < 10 ; i++){
        v[i] = q;
        printf("N[%d] = %d\n", i, v[i]);
        q *= 2;
    }
}

int main(){
    int v;

    scanf("%d", &v);

    Printa(v);
    
    return 0;
}