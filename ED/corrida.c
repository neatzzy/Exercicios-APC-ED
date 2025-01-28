#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
    }

int main(){
    int nro, menor = -1;
    char corredor1[20], corredor2[20];

    INPUT: printf("Digite o numero de corredores: ");
    scanf("%d", &nro);

    if (nro < 2){
        printf("Numero de corredores invalido\nDigite qualquer tecla para tentar novamente\n");
        getchar(); getchar();
        system("clear");
        goto INPUT;
        }

    int corredores[nro];

    for(int i = 0; i < nro; i++){
        printf("Digite o nivel de habilidade do corredor %d: ", i + 1);
        scanf("%d", &corredores[i]);

        if(corredores[i] < 0){
            printf("Nivel de habilidade invalido\nDigite qualquer tecla para tentar novamente\n");
            getchar(); getchar();
            system("clear");
            i--;
        }
        }

    qsort(corredores, nro, sizeof(int), compare);

    for (int i = 0; i < nro; i++){
        if (abs(corredores[i + 1] - corredores[i]) < menor || menor == -1){
            menor = corredores[i + 1] - corredores[i];
            }
        }

    printf("A corrida mais disputada tem a diferença de %d pontos\n", menor);

    return 0;
    }