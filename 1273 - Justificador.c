#include <stdio.h>
#include <string.h>

int main(){
    int qtd, maior = 0;

    scanf("%d", &qtd);

    while(qtd != 0){
        getchar();
        char str[qtd][51];
        int n[qtd];

        for(int i = 0; i < qtd ; i++){
            scanf("%[^\n]", str[i]);
            getchar();
            n[i] = strlen(str[i]);
            if(n[i] > maior){
                maior = n[i];
            }
        }

        for(int i = 0; i < qtd ; i++){
            for(int j = 0; j < maior - n[i] ; j++){
                printf(" ");
            }
            printf("%s\n", str[i]);
        }
        maior = 0;

        scanf("%d", &qtd);

        if(qtd == 0){
            return 0;
        }

        printf("\n");
    }

    

    return 0;
}