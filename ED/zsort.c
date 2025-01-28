#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
    }

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        }

    qsort(arr, n, sizeof(int), compare);

    int i = 0, j = n - 1;

    while (j > i){
        printf("%d %d ", arr[i], arr[j]);
        i++;
        j--;
        }
    if (n % 2 != 0){
        printf("%d", arr[i]);
        }

    printf("\n");

    return 0;
    }