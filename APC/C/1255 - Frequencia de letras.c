#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct {
    char letra;
    int frequencia;
} caracter;

int main(){
    int n, tam;
    char str[201];

    scanf("%d", &n);
    getchar();

    for(int i = 0 ; i < n ; i++){
        fgets(str, 201, stdin);

        caracter letras[26];

        for(int j = 0 ; j < 26 ; j++){
            letras[j].letra = 'a' + j;
            letras[j].frequencia = 0;
        }

        tam = strlen(str);

        for(int j = 0 ; j < tam ; j++){
            str[j] = tolower(str[j]);
        }

        qsort(str, tam, sizeof(char), strcmp);

        for(int j = 0 ; j < tam ; j++){
            if(isalpha(str[j])){
                letras[(str[j]) - 'a'].frequencia++;
            }
        }

        for(int j = 0 ; j < 26 ; j++){
            for(int k = j + 1 ; k < 26 ; k++){
                if(letras[j].frequencia < letras[k].frequencia){
                    caracter aux = letras[j];
                    letras[j] = letras[k];
                    letras[k] = aux;
                }
            }
        }

        int maior = 0;

        for(int j = 0 ; j < 26 ; j++){
            if(letras[j].frequencia > maior){
                maior = letras[j].frequencia;
            }
        }

        for(int j = 0 ; j < 26 ; j++){
            if(letras[j].frequencia == maior){
                printf("%c", letras[j].letra);
            }
        }

        printf("\n");
    }

    return 0;
}

