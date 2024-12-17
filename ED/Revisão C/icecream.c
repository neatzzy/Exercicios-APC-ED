#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int trips, money, flavors;

    scanf("%d", &trips);

    for(int i = 0 ; i < trips ; i++){
        scanf("%d", &money);
        scanf("%d", &flavors);

        int prices[flavors];

        for(int j = 0; j < flavors; j++){
            scanf("%d", &prices[j]);
        }

        for(int j = 0 ; j < flavors ; j++){
            for(int k = j + 1; k < flavors; k++){
                if(prices[j] + prices[k] == money){
                    int res[2] = {j + 1, k + 1};

                    if(res[0] > res[1]){
                        swap(&res[0], &res[1]);
                    }

                    printf("%d %d\n", res[0], res[1]);
                    break;
                }
            }
        }
    }
}