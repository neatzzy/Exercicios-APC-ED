#include <stdio.h>
#include <string.h>

void Verifica(int n, char hist[][101], char pesq[]);
 
int main() {
    int n, q;

    scanf("%d", &n);

    char hist[n][101];

    for(int i = 0 ; i < n ; i++){
        getchar(); scanf("%[^\n]", hist[i]);
    }

    scanf(" %d", &q);

    char pesq[101];

    for(int i = 0 ; i < q ; i++){
        getchar(); scanf("%[^\n]", pesq);
        Verifica(n, hist, pesq);
    }

    return 0;
}

void Verifica(int n, char hist[][101], char pesq[]){
    int qtd = 0, maior = 0, tam = strlen(pesq);

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < tam ; j++){
            if(pesq[j] != hist[i][j]){
                break;
            }
            if(j == tam - 1){
                qtd++;
                int teste = strlen(hist[i]);
                if(teste >= maior){
                    maior = teste;
                }
            }
        }
    }

    if(qtd == 0){
        printf("-1\n");
    }
    else{
        printf("%d %d\n", qtd, maior);
    }
}