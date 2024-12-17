#include <stdio.h>

int main() {

    float n1, n2, n3, n4, media, exame;

    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    media = (n1*2 + n2*3 + n3*4 + n4*1) / 10;
    if (media >= 7.0){
        printf("Media: %.1f\nAluno aprovado.\n", media);
    }
    else if ((5.0 <= media) && (media <=6.9)){
        printf("Media: %.1f\nAluno em exame.\n", media);
        scanf("%f", &exame);
        printf("Nota do exame: %.1f\n", exame);
        media = (media + exame) / 2;
        if (media >= 5.0){
            printf("Aluno aprovado.\n");
        }
        else{
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", media);
    }
    else if(media < 5.0){
        printf("Media: %.1f\nAluno reprovado.\n", media);
    }
    return 0;
}