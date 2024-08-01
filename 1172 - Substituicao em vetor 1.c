#include <stdio.h>

void Verifica(int v[]){
    int i;
    for(i = 0 ; i < 10 ; i++){
        if(v[i] <= 0){
            v[i] = 1;
        }
    }
}
void LeInput(int v[]){
    int i;
    for(i = 0 ; i < 10 ; i++){
        scanf("%d", &v[i]);
        }
}

void Printa(int v[]){
    int i;
    for(i = 0 ; i < 10 ; i++){
        printf("X[%d] = %d\n", i, v[i]);
        }
}

int main(){
    int nros[10];

    LeInput(nros);

    Verifica(nros);

    Printa(nros);

    return 0;
}
