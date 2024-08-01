#include <stdio.h>

//Funcao que calcula o peso ideal
float pesoideal(float h, char s){
    float peso, h2;

    h2 = h * h

    if(s == 'M'){
        peso = 23 * h2;
    }
    else{
        peso = 20 * h2;
    }

    return peso;
}

int main(){
    int q, i;
    float altura, altura2;
    char sexo [1];

    scanf("%d", &q);

    for(i = 0 ; i < q ; i++){
        scanf("%f %c", &altura, sexo);

        printf("Peso ideal: %.2f\n", pesoideal(altura, sexo));
    }
    return 0;
}