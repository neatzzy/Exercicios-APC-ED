#include <stdio.h>

void LeInput(int v[], int q){
    int i;
    for(i = 0 ; i < q ; i++){
        scanf("%d", &v[i]);
    }
}

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int Verifica(int v[], int q){
    int i, mem, falsos = 0;
    mem = v[0];
    for(i = 1 ; i < q ; i++){
        if(v[i] == mem){
            falsos++;
            while(v[i] == mem){
                i++;
            }
        }
        mem = v[i];
    }
    return falsos;
}

int main(){
    int n, m;

    while(1){
    scanf("%d %d", &n, &m);
    if(n == m && n == 0){
        break;
    }
    int v[m];

    LeInput(v, m);
    quickSort(v, 0, m - 1);
    printf("%d\n", Verifica(v, m));
    }

    return 0;
}