#include <stdio.h>
int opcoes[5];

void LeInput(){
    int i;

    for(i = 0; i < 5 ; i++){
        scanf("%d", &opcoes[i]);
    }
}

void Verifica(int q){
    int i, idx, resposta, marcados;

    for(idx = 0; idx < q; idx++){
    LeInput();

    marcados = 0;
    resposta = -1;

    for(i = 0 ; i < 5; i++){

        if(opcoes[i] <= 127){
            marcados++;
            resposta = i;
        }
    }

    if (marcados == 1){
            switch (resposta){
            case 0:
                printf("A\n");
                break;
            
            case 1:
                printf("B\n");
                break;

            case 2:
                printf("C\n");
                break;

            case 3:
                printf("D\n");
                break;
                
            case 4:
                printf("E\n");
                break;
            }
        }
    else{
            printf("*\n");
        }

}
}

int main(){
    int qtd;

    while(1){
        scanf("%d", &qtd);

        if(qtd == 0){
            break;
        }

        Verifica(qtd);
    }

    return 0;
}