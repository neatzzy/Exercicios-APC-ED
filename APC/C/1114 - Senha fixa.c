#include <stdio.h>

int main(){

    int tent;
    int senha = 2002;

    scanf("%d", &tent);

    do{
        if(tent == senha){
        }
        else{
            printf("Senha Invalida\n");
            scanf("%d", &tent);
        }
    }while(tent != senha);

    printf("Acesso Permitido\n");
    return 0;
}