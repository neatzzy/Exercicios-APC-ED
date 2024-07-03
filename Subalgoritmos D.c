#include <stdio.h>
float x0, y0, x1, y1;

//Funcao que le os pontos
void LePonto(){
    scanf("%f %f %f %f", &x0, &y0, &x1, &y1);
}

//Funcao se verifica se os pontos sao validos
int Verifica(int x0, int x1){
    if(x0 == x1){
        return 0;
    }
    return 1;
}

int main(){

    LePonto();

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