#include <stdio.h>
int par[5], impar[5], qtdpar = 0, qtdimpar = 0;

void Preenche(int n){
    if(n % 2 == 0){
        par[qtdpar] = n;
        qtdpar++;
    }
    else{
        impar[qtdimpar] = n;
        qtdimpar++;
    }
}

void ImprimeImpar(){
    int i;

    for(i = 0 ; i < 5 ; i++){
        printf("impar[%d] = %d\n", i, impar[i]);
    }
    qtdimpar = 0;
}

void ImprimePar(){
    int i;

    for(i = 0 ; i < 5 ; i++){
        printf("par[%d] = %d\n", i, par[i]);
    }
    qtdpar = 0;
}

int main(){
    int n, i;

    for(i = 0 ; i < 15 ; i++){
        scanf("%d", &n);
        Preenche(n);

        if(qtdimpar == 5){
            ImprimeImpar();
        }
        if (qtdpar == 5)
        {
            ImprimePar();
        }
        
    }

    if(qtdimpar != 0){
        for(i = 0 ; i < qtdimpar ; i++){
        printf("impar[%d] = %d\n", i, impar[i]);
        }
    }

    if(qtdpar != 0){
        for(i = 0 ; i < qtdpar ; i++){
        printf("par[%d] = %d\n", i, par[i]);
        }
    }
    
    return 0;
}