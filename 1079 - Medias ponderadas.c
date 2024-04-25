#include <stdio.h>

int main(){
    int n, idx, soma;
    float nota1, nota2, nota3, media;

    scanf("%d", &n);

    for(idx = 0 ; idx < n ; idx++){
        scanf("%f %f %f", &nota1, &nota2, &nota3);
        media = ((2 * nota1) + (3 * nota2) + (5 * nota3)) / 10;
        printf("%.1f\n", media);
    }
    return 0;
}