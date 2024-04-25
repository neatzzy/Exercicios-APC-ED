#include <stdio.h>

int main(){
    int i, nro;
    int npar = 0;
    int nimpar = 0;
    int npos = 0;
    int nneg = 0;

    for(i = 1 ; i <= 5 ; i++){
        scanf("%d", &nro);
            if(nro % 2 == 0){
            npar ++;
            }
            else{
                nimpar ++;
            }
            if(nro > 0){
                npos ++;
            }
            else if(nro < 0){
                nneg ++;
            }
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", npar, nimpar, npos,nneg);
    
    return 0;
}