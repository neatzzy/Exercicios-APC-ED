#include <stdio.h>

int main(){
    int n, k, lim;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d %d", &k, &lim);

        int arr[k], count = 0;

        for(int j = 0; j < k; j++){
            scanf("%d", &arr[j]);
        }

        for(int j = 0; j < k; j++){
            if(arr[j] <= 0){
                count++;
            }
        }
        if(count >= lim){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }
}