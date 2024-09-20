#include <stdio.h>
#include <math.h>

int pascal(int n){
    if(n == 1){
        return 1;
    }
    else{
        return pow(2, n);
    }
}

int main(){
    int t;

    scanf("%d", &t);

    for(int i = 0; i < t; i++){
        int n;

        scanf("%d", &n);

        if(n == 1){
            printf("1\n");
        }
        else{
            printf("%d\n", abs(pascal(n)) - 1);
        }

    }
}