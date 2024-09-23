#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int n, flag, tam;
    char sobrenome[43]; 

    scanf("%d", &n);
    getchar();

    for(int i = 0 ; i < n ; i++){
        scanf("%s", sobrenome);
        flag = 0;

        tam = strlen(sobrenome);

        sobrenome[0] += 32;

        for(int j = 2 ; j < tam ; j++){
            if(!strchr("aeiou", sobrenome[j]) && !strchr("aeiou", sobrenome[j-1]) && !strchr("aeiou", sobrenome[j - 2])){
                flag = 1;
                break;
            }
        }

        sobrenome[0] -= 32;

        if(flag == 0){
            printf("%s eh facil\n", sobrenome);
        }
        else{
            printf("%s nao eh facil\n", sobrenome);
        }
    }
    return 0;
}