#include <stdio.h>

int main(){
    int bytes, soma = 0,i = 0, input, memoria, somaatual = 0;

    scanf("%d", &bytes);

    printf("Data size of %d bytes:\n", bytes);

    memoria = soma;

    while((scanf("%d", &input)) && (input != 'F')){
        i++;
        soma += input;
        somaatual += input;

        if((i % 5) == 0){
            if(memoria != soma){
                int t = ((bytes - soma) * 5) / somaatual;
                double t2 = ((bytes - soma) * 5.0) / somaatual;

                if(t2 - t > 0){
                    t++;
                }

                printf("Time remaining: %d seconds\n", t);
            }
            else{
                printf("Time remaining: stalled\n");
            }
            memoria = soma;
            somaatual = 0;
        }
    }
    printf("Total time: %d seconds\n", i);
    return 0;
}