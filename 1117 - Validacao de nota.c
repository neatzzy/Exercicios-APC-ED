#include <stdio.h>

int main(){

    float nota, soma = 0, media;
    int idx;

    for(idx = 0 ; idx < 2 ; idx++){
        scanf("%f", &nota);
        if ((nota < 0) || (nota > 10)){
            printf("nota invalida\n");
            idx --;
        }
        else{
            soma += nota;
        }    
    }

    media = soma / 2;
    printf("media = %.2f\n", media);
    return 0;
}