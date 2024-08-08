#include <stdio.h>
#include <string.h>

int main(){
    int n;

    scanf("%d", &n);

    for(int i = 0; i < n ; i++){
        int k;

        scanf("%d", &k);

        char str[k][21];

        int a = 0;

        for(int j = 0; j < k ; j++){
            getchar();
            scanf("%s", str[j]);

            if(j == 0){
                continue;
            }

            if(strcmp(str[j], str[j-1]) != 0){
                a = 1;
            }
           
        }
        if (a == 0){
            printf("%s\n", str[0]);
        }else{
            printf("ingles\n");
        }
    }
return 0;
}