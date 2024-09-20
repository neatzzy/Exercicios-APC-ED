#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[101];
    int poder;
    int kills;
    int mortes;
} godofor;

int comp(godofor *a, godofor *b){
    if (a->poder == b-> poder) {
        if (a->kills == b->kills) {
            if (a->mortes == b->mortes) {
                return strcmp(a->nome, b->nome);
            } else if (a->mortes < b->mortes) {
                return -1;
            } else {
                return 1;
            }
        } else if (a->kills < b->kills) {
            return 1; 
        } else {
            return -1;
        }
    } else if (a->poder < b->poder) {
        return 1;
    }
    return -1;
}

int main(){
    int n;

    scanf("%d", &n);

    godofor candidatos[n];

    for(int i = 0 ; i < n ; i++){ 
        scanf("%s %d %d %d", candidatos[i].nome, &candidatos[i].poder, &candidatos[i].kills, &candidatos[i].mortes);
    }

    qsort(candidatos, n, sizeof(godofor), comp);

    printf("%s\n", candidatos[0].nome);

    return 0;
}