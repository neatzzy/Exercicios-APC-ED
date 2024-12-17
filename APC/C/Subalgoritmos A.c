#include <stdio.h>

//Funcao que calcula o coeficiente angular da reta
float coeficiente (float x0, float y0, float x1, float y1){
    float coef;

    coef = ((y1 -y0) / (x1 - x0));

    return coef;
}

int main(){
    float x0, y0, x1, y1;

    scanf("%f %f %f %f", &x0, &y0, &x1, &y1);

    printf("%.2f\n", coeficiente(x0, y0, x1, y1));

    return 0;
}