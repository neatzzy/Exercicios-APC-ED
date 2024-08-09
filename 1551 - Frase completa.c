#include <stdio.h>
#include <string.h>

int Verifica(char str[]);

int main(){
    int n;
    char str[1001];

    scanf("%d", &n);

    for(int i = 0 ; i < n ; i++){
        getchar();
        scanf("%[^\n]", str);

        int res = Verifica(str);

        switch(res){
            case 1:
                printf("frase quase completa\n");
                break;

            case 2:
                printf("frase completa\n");
                break;

            case 3:
                printf("frase mal elaborada\n");
                break;
        }

    }
    return 0;
}

int Verifica(char str[]){
    int alfabeto [26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int q = 26;

    for(int i = 0 ; str[i] != '\0' ; i++){
        if(str[i] > 96 && str[i] < 123){
            for(int j = 0 ; j < 26 ; j++){
                if(str[i] == alfabeto[j]){
                    alfabeto[j] = 0;
                    q--;
                    break;
                }
            }
        }
        if(q == 0){
        return 2;
        }
    }
    if(q <= 13){
        return 1;
    }
    else{
        return 3;
    }
}