#include <stdio.h>

void LeInput(int q, int vetor[]){
    int i;
    for(i = 0 ; i < q ; i++){
        scanf("%d", &vetor[i]);
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



void Frequencia(int v[], int q){
    int mem, sequencia = 1, i;

    mem = v[0];

    for(i = 1 ; i <= q; i++){
        if(v[i] == mem){
            sequencia++;
        }
        else{
            printf("%d aparece %d vez(es)\n", mem, sequencia);
            sequencia = 1;
        }
        mem = v[i];
    }
}

int main(){
    int qtd, i;

    scanf("%d", &qtd);

    int vetor[qtd];

    LeInput(qtd, vetor);

    quickSort(vetor, 0, qtd - 1);

    Frequencia(vetor, qtd);

    return 0;
}