#include <stdio.h>

int main(){
    int cod, salc = 0, sgas = 0, sdie = 0;

    scanf("%d", &cod);

    while(cod != 4){
        switch (cod){
            case 1:
                salc ++;
            break;

            case 2:
                sgas ++;
            break;

            case 3:
                sdie++;
            break;
        }
        scanf("%d", &cod);
    }
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", salc, sgas, sdie);
    return 0;
}