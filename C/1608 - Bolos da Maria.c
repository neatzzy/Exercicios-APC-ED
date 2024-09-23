#include <stdio.h>
 
int main(){
    int t;

    scanf("%d", &t);

    for(int j = 0 ; j < t ; j++){
        int d, i, b;

        scanf("%d %d %d", &d, &i, &b);

        int precIng[i];

        for(int k = 0 ; k < i ; k++){
            scanf("%d", &precIng[k]);
        }

        int max = 0;
        
        for(int i = 0; i < b; i++){
            int qi;

            scanf("%d", &qi);

            int total = 0;

            for(int j = 0; j < qi; j++){
                int ingIdx, qtd;

                scanf("%d %d", &ingIdx, &qtd);
                
                total += precIng[ingIdx] * qtd;
            }

            int bolos = d / total;

            if(bolos > max){
                max = bolos;
            }
        }

        printf("%d\n", max);
    }
    return 0;
}