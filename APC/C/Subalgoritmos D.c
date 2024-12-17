#include <stdio.h>

//Funcao que le os pontos
void LePonto(float *x0, float *y0, float *x1, float *y1){
    scanf("%f %f %f %f", x0, y0, x1, y1);
}

//Funcao se verifica se os pontos sao validos
int Verifica(float x0, float x1){
    if(x0 == x1){
        return 0;
    }
    return 1;
}

int main(){
    float x0, y0, x1, y1;

    LePonto(&x0, &y0, &x1, &y1);

    Verifica(x0, x1);

    if(Verifica == 0){
        printf("Nao eh possivel determinar o coeficiente angular\n");
    }
    else{
    float coefang;
    
    coefang = ((y1 - y0) / (x1 - x0));

    printf("%.2f", coefang);
    }

    return 0;

}
