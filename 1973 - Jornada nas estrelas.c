#include <stdio.h>

void LeInput(int q, int v[]){
    int i;

    for(i = 0 ; i < q ; i++){
        scanf("%d", &v[i]);
    }
}

int Jornada(int v[], int q, long long int *nroub){
    int i, max = -1, atc = 0;
    for(i = 0 ; (i < q) && (i >= 0)  ; i++){
        if(i > max){
            atc++;
            max = i;
        }
        if((v[i] % 2) != 0){
            v[i]--;
            continue;
        }
        else{
            if(v[i] > 0){
                v[i]--;
            }
            i-=2;
        }
    }

    for(i = 0 ; i < q ; i++){
        *nroub += v[i];
        }

return atc;
}

int main(){
    int n, atac; 
    long long nroub = 0;

    scanf("%d", &n);

    int v[n];

    LeInput(n, v);

    atac = Jornada(v, n, &nroub);

    printf("%d %lld\n", atac, nroub);

    return 0;
}

