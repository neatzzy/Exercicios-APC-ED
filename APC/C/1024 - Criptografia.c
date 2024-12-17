#include <stdio.h>
#include <string.h>

int main(){
    int n;
    char str[1001], aux;

    scanf("%d", &n);
    getchar();

    for(int i = 0 ; i < n ; i++){
        scanf("%[^\n]", str);
        getchar();

        int tam = strlen(str), met = tam / 2;

        for(int j = 0 ; j < tam ; j++){
            if((str[j] >= 'a' && str[j] <= 'z') || (str[j] >= 'A' && str[j] <= 'Z')){
                str[j] += 3;
            }
        }

        for(int j = tam - 1, k = 0 ; k < met ; j--, k++){
            aux = str[j];
            str[j] = str[k];
            str[k] = aux;
        }

        for(int j = met ; j < tam ; j++){
            if(str[j] >= 32 && str[j] <= 176){
            str[j]--;
            }
        }

        printf("%s\n", str);

    }
    return 0;
}