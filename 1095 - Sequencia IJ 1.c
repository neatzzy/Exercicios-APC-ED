#include <stdio.h>

int main(){
    int i = 1;
    int j = 60;

    printf("I=%d J=%d\n", i, j);

    while (j > 0){
        i += 3;
        j -= 5;
        printf("I=%d J=%d\n", i, j);
    }
    return 0;
}