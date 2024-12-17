#include <stdio.h>
#include <string.h>

void Decodifica(char str[], int q);

int main(){

    int qtd;

    scanf("%d", &qtd);

    for(int i = 0; i < qtd ; i++){
        getchar();
        char str [51];
        scanf("%[^\n]", str);

        int n = strlen(str);

        Decodifica(str, n);
    }

    return 0;
}

void Decodifica(char str[], int q){
    for(int i = 0 ; i < q ; i++){
        if(str[i] == ' '){
            continue;
        }
        printf("%c", str[i]);
        while(str[i] != ' '){
            i++;
        }
    }
    printf("\n");
}
