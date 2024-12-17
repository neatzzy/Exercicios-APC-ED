#include <stdio.h>

int main(){
    int testes;

    scanf("%d", &testes);

    for(int i = 0 ; i < testes ; i++){
        int tam, achou = 0, somaL = 0, somaR = 0;
        
        scanf("%d", &tam);

        int arr[tam];

        for(int j = 0 ; j < tam ; j++){
            scanf("%d", &arr[j]);
            somaR += arr[j];
        }
        somaR -= arr[0];

        if(somaL == somaR){
            achou = 1;
            goto END;
        }

        for(int j = 1; j < tam ; j++){
            somaL += arr[j - 1];
            somaR -= arr[j];

            if(somaL == somaR){
                achou = 1;
                break;
            }
        }
        END: if(achou){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }

    }
    return 0;
}