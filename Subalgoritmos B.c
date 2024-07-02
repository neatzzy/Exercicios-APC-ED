#include <stdio.h>

//Funcao que calcula o peso ideal
float pesoideal(float h, char s){
    float peso;

    if(s == 'M'){
        peso = 23 * h;
    }
    else{
        peso = 20 * h ;
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

        altura2 = altura * altura;

        printf("Peso ideal: %.2f\n", pesoideal(altura2, sexo));
    }
    return 0;
}