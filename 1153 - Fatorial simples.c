#include <stdio.h>

int fatorial(int nro){
    if(nro == 0){
        return 1;
    }else{
        return nro * fatorial(nro - 1);
    }
}

int main(){
    int n;

    scanf("%d", &n);

    printf("%d\n", fatorial(n));
    
    return 0;
}