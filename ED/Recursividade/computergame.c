#include <stdio.h>

int minecraft(int x, int y, int tam, char tabuleiro[2][tam+1]){

    if(x == 1 && y == tam-1){
        return 1;
    }

    if(tabuleiro[x-1][y+1] == '0' && x-1 >= 0 && y+1 < tam){
        return minecraft(x-1, y+1, tam, tabuleiro);
    }
    else if(tabuleiro[x][y+1] == '0' && y+1 < tam){
        return minecraft(x, y+1, tam, tabuleiro);
    }
    else if(tabuleiro[x+1][y+1] == '0' && x+1 < 2 && y+1 < tam){
        return minecraft(x+1, y+1, tam, tabuleiro);
    }
    else if(tabuleiro[x+1][y] == '0' && x+1 < 2){
        return minecraft(x+1, y, tam, tabuleiro);
    }
    return 0;
}

int main(){
    int testes;
    scanf("%d", &testes);

    for(int i = 0; i < testes; i++){
        int tam;
        scanf("%d", &tam);
        
        char tabuleiro[2][tam+1];

        scanf("%s", tabuleiro[0]);
        scanf("%s", tabuleiro[1]);

        int bool = minecraft(0, 0, tam, tabuleiro);

        bool ? printf("YES\n") : printf("NO\n");
    }
    return 0;
}