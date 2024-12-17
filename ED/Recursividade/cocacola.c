#include <stdio.h>

int total;

int coca(int nro){
    if(nro == 2){
        nro++;
    }
    if(nro == 1){
        return 0;
    }
    total+=nro/3;
    return coca(nro/3+nro%3);
}

int main(){
    int n;

    while(scanf("%d", &n)){
        total = 0;
        if(n == 0){
            break;
        }
        coca(n);
        printf("%d\n", total);
    }
    return 0;
}