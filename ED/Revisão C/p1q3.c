#include <stdio.h>
#include <math.h>

int main(){
    int nroBuracos;
    float xCoelho, yCoelho, xRaposa, yRaposa;

    scanf("%d", &nroBuracos);
    scanf("%f %f %f %f", &xCoelho, &yCoelho, &xRaposa, &yRaposa);

    float buracos[nroBuracos][2];

    for(int i = 0; i < nroBuracos; i++){
        scanf("%f %f", &buracos[i][0], &buracos[i][1]);

        float distanciaCoelho = sqrt(pow(buracos[i][0] - xCoelho, 2) + pow(buracos[i][1] - yCoelho, 2));
        float distanciaRaposa = sqrt(pow(buracos[i][0] - xRaposa, 2) + pow(buracos[i][1] - yRaposa, 2));

        if(distanciaCoelho <= distanciaRaposa/2){
            printf("O coelho pode escapar pelo buraco (%.3f,%.3f).\n", buracos[i][0], buracos[i][1]);
            return 0;
        }
    }
    printf("O coelho nao pode escapar.\n");
    return 0;
}