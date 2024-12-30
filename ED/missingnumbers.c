#include <stdio.h>
#include <stdio.h>

int compare(const void *a, const void *b){
    return (*(int*)a - *(int*)b);
}

int main(){
   int n, m;

    scanf("%d", &n);

    int arr[n];

   for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
   } 

    scanf("%d", &m);

    int brr[m];

    for(int i = 0; i < m; i++){
        scanf("%d", &brr[i]);
    }

    qsort(arr, n, sizeof(int), compare);
    qsort(brr, m, sizeof(int), compare);

    for(int i = 0, j = 0; i < m; i++, j++){
        if(arr[j] != brr[i]){
            printf("%d ", brr[i]);
            j--;
        }
    }
    printf("\n");

    return 0;
}