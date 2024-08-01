#include <stdio.h>

void LeInput(double m[][12]){
    for(int i = 0 ; i < 12 ; i++){
        for(int j = 0 ; j < 12 ; j++){
            scanf("%lf", &m[i][j]);
        }
    }
}

double Somar(double m[][12]){
    double sum = 0;

    for(int i = 0 ; i < 5 ; i++){
        for(int j = 1+i ; j < 11-i ; j++){
            sum += m[i][j];
        }
    }
    return sum;   
}

int main(){
    double soma, m[12][12];
    char o;

    scanf("%c", &o);

    LeInput(m);

    soma = Somar(m);

    if(o == 'M'){
        double media = soma / 30.0;
        printf("%.1lf\n", media);
    }
    else{
        printf("%.1lf\n", soma);
    }

}