#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b){
    return (*(char*)a - *(char*)b);
}

    int main(){
        int casos;
        scanf("%d", &casos);

        for(casos = casos; casos > 0 ; casos--){
            int n;
            scanf("%d", &n);

            char str[n];

            scanf("%s", str);

            for(int i = 0; i < n; i++){
                scanf(" %c", &str[i]);
            }
        }
}