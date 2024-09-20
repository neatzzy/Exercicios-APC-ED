#include <stdio.h>

int crescimento(long int pa, long int pb, double ga, double gb){
    int anos = 0;

    while(pa <= pb && anos < 101){
        pa += (int)((pa * ga) / 100);
        pb += (int)((pb * gb) / 100);
        
        anos ++;
    }
    return anos;
}

int main(){
    int qtd, i, tempo;
    long int a, b;
    double g1, g2;

    scanf("%d", &qtd);
    
    for(i = 0 ; i < qtd ; i++){
        scanf("%ld %ld %lf %lf", &a, &b, &g1, &g2);

        tempo = crescimento(a, b, g1, g2);

        if(tempo <= 100){
            printf("%d anos.\n", tempo);
        }
        else{
            printf("Mais de 1 seculo.\n");
        }
    }
    return 0;
}