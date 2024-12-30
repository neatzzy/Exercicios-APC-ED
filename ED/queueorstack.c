#include <stdio.h>

int main(){
    int casos;
    scanf("%d", &casos);

    for(int i = 0 ; i < casos ; i++){
        int tam, isQueue = 1, isStack = 1;
        scanf("%d", &tam);

        int arrIn[tam], arrOut[tam];
        
        for(int j = 0 ; j < tam ; j++){
            scanf("%d", &arrIn[j]);
        }
        for(int j = 0 ; j < tam ; j++){
            scanf("%d", &arrOut[j]);
        }

        for(int j = 0 ; j < tam ; j++){
            if(arrIn[j] != arrOut[j]){
                isQueue = 0;
                break;
            }
        }
        int aux = tam - 1;
        for(int j = 0 ; j < tam ; j++){
            if(arrIn[j] != arrOut[aux]){
                isStack = 0;
                break;
            }
            aux--;
        }

        if(isQueue && isStack){
            printf("both\n");
        }else if(isQueue){
            printf("queue\n");
        }else if(isStack){
            printf("stack\n");
        }else{
            printf("neither\n");
        }
    }

    return 0;
}