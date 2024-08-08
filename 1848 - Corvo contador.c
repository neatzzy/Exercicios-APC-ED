#include <stdio.h>
#include <string.h>

int main(){
    int soma = 0, i = 0;
    char str[20];
    do{
        scanf("%[^\n]", str);
        getchar();

        if(strcmp(str, "caw caw") == 0){
            i++;
            printf("%d\n", soma);
            soma = 0;
        }
        else {
            if(str[0] == '*'){
                soma += 4;
            }
            if(str[1] == '*'){
                soma += 2;
            }
            if(str[2] == '*'){
                soma += 1;
            }
        }
    }while(i != 3);

    return 0;
}