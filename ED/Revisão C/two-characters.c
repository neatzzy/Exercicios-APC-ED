#include <stdio.h>
#include <string.h>

int main(){
    int len, idx = 0, qtdlet = 0, maior = 0;

    scanf("%d", &len);

    char str[len], letras[26];

    scanf("%s", str);

    letras[0] = copy[0];

    while(){

    }

    for(int i = 0 ; i < qtdlet ; i++){
        printf("%c ", letras[i]);
    }

    printf("\n");

    for(int i = 0 ; i < qtdlet ; i++){
        int tam = 2;
        char a = letras[i];
        for(int j = i + 1 ; j < qtdlet ; j++){

            char b = letras[j];
            int procurando = 0;
            printf("a: %c b: %c\n", a, b);

            for(int k = 0 ; k < len ; k++){
                if(!procurando){
                    if(str[k] == a){
                        procurando = 1;
                        tam++;
                    }
                    else if(str[k] == b){
                        printf("repitiu\n");
                        tam = 0;
                        break;
                    }
                }
                else{
                    if(str[k] == b){
                        procurando = 0;
                        tam++;
                    }
                    else if(str[k] == a){
                        printf("repitiu\n");
                        tam = 0;
                        break;
                    }
                }
            }

            printf("tamanho: %d\n", tam);
            if(tam > maior){
                maior = tam;
            }
        }

    }

    printf("%d\n", maior);
}