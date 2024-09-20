#include <stdio.h>
 
int main() {
 
    int tempo, velocidade;
    float consumo;
    
    scanf("%d %d", &tempo, &velocidade);
    
    consumo = (velocidade*tempo) / 12.0;
    
    printf("%.3f\n", consumo);
 
    return 0;
}