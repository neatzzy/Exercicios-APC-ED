#include <stdio.h>

int main(){
    int n, d, m, count = 0;

    scanf("%d", &n);

    int arr[n];

    for(int j = 0; j < n; j++){
        scanf("%d", &arr[j]);
    }

    scanf("%d %d", &d, &m);

    for(int i = 0; i < n; i++){
        int soma = 0, tam = 0;
        for(int k = i ; k < n; k++){
            if(tam < m){
                soma += arr[k];
                tam++;
            }
            else{
                break;
            }
            if((soma == d) && (tam == m)){
                count++;
                break;
            }
        }
    }

    printf("%d\n", count);

    return 0;

}