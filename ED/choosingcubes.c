#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b){
    return (*(int*)b - *(int*)a);
    }

int main(){
    int n, f, k, casos;

    scanf("%d", &casos);

    for (int c = 0; c < casos; c++){
        scanf("%d %d %d", &n, &f, &k);

        int arr[n];

        for (int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
            }

        int valorFav = arr[f - 1];

        qsort(arr, n, sizeof(int), compare);

        int foi = 1, naoFoi = 1;

        for (int i = 0; i < k; i++){
            if (arr[i] == valorFav) naoFoi = 0;
            }
        for (int i = k; i < n; i++){
            if (arr[i] == valorFav) foi = 0;
            }

        if (foi) printf("YES\n");
        else if (naoFoi) printf("NO\n");
        else printf("MAYBE\n");
        }

    return 0;
    }