#include <stdio.h>
void preencheMatriz(int q);

int main(){
    int n;

    while((scanf("%d", &n)) != EOF){
        preencheMatriz(n);

    }
}

void preencheMatriz(int q){
    for(int i = 0; i < q; i++){
        for(int j = 0; j < q; j++){
            if(i == j){
            printf("1");
            }else if(i > j){
            printf("2");
            }else{
            printf("3");
            }
        }
        printf("\n");
    }
}
