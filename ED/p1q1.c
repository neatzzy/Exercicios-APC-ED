#include <stdio.h>

int main(){
    int nroA, nroB;

    scanf("%d %d", &nroA, &nroB);

    if(nroA > nroB){
        printf("%d\n%d\n", nroA, nroB);
    }
    else{
        printf("%d\n%d\n", nroB, nroA);
    }

    if(nroA == nroB){
        printf("iguais\n");
    }
    else{
        printf("diferentes\n");
    }
    return 0;
}