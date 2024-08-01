#include <stdio.h>
#include <stdlib.h>

void LeInput(int q,int v[]){
    int i;
    for(i = 0 ; i < q ; i++){
        scanf("%d", &v[i]);
    }
}

int Trabalhos(int n, int v[]){
    int i = 0, j = n-1;
    long long int somaR, somaG, diff;

    somaR = v[i];
    somaG = v[j];

    while(j - i > 1){
        if(somaR < somaG){
            i++;
            somaR += v[i];
        }
        else{
            j--;
            somaG += v[j];
        }
    }

    diff = abs(somaR - somaG);

    return diff;
}

int main(){
    int n;
    
    while(scanf("%d", &n) != EOF){
        
        int v[n];

        LeInput(n, v);

        printf("%d\n", Trabalhos(n, v));
    }

    return 0;
}