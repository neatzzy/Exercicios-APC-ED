#include <stdio.h>

int main(){

    int idx;
    int total = 0;
    float nro;

    for(idx = 1; idx <= 6; idx++){
        scanf("%f", &nro);
        if (nro > 0){
            total ++;
        }
}
printf("%d valores positivos\n", total);

return 0;
}