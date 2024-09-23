#include <stdio.h>

int main(){
    int c, b, e;

    scanf("%d", &c);

    for(int i = 0 ; i < c ; i++){
        scanf("%d %d", &b, &e);

        int idx = b, qtd = (e - b) + 1;
        int v[qtd];

        for(int j = 0 ; j < qtd ; j++){
            v[j] = idx;
            printf("%d", v[j]);
            idx++;
        }
        for(int k = qtd - 1; k >= 0 ; k--){
            int nro = v[k], inv;

            while(nro != 0){
                inv = nro % 10;
                printf("%d", inv);
                nro /= 10;
            }
        }
            printf("\n");
    }

    return 0;
}