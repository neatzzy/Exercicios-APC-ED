#include <stdio.h>

void LeInput(int q, int vcar[], int p, int vcomp[]){
    int i;

    for(i = 0 ; i < q ; i++){
        scanf("%d", &vcar[i]);
    }
    for(i = 0 ; i < p ; i++){
        scanf("%d", &vcomp[i]);
    }
}

int Verifica(int q, int vcar[], int p, int vcomp[]){
    int i, j, faltantes = q;
    for(i = 0 ; i < q ; i++){
        for(j = 0 ; j < p ; j++){
            if(vcomp[j] == vcar[i]){
                faltantes--;
                break;
            }
        }
    }

    return faltantes;
}

int main(){
    int n, c, m;

    scanf("%d %d %d", &n, &c, &m);

    int vcar[c], vcomp[m];

    LeInput(c, vcar, m, vcomp);

    printf("%d\n", Verifica(c, vcar, m, vcomp));

    return 0;
}