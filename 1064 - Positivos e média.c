#include <stdio.h>

int main(){

    int idx;
    int total = 0;
    float nro, soma, media;

    for(idx = 1; idx <= 6; idx++){
        scanf("%f", &nro);
        if (nro > 0){
            total ++;
            soma += nro;
        }
}
media = soma / total;
printf("%d valores positivos\n%.1f\n", total, media);

return 0;
}
