#include <stdio.h>

int main(){

     int dia1, hora1, min1, seg1;
     int dia2, hora2, min2, seg2;
     int diaf, horaf, minf, segf;

     scanf("Dia %d\n%d : %d : %d\n", &dia1, &hora1, &min1, &seg1);
     scanf("Dia %d\n%d : %d : %d", &dia2, &hora2, &min2, &seg2);

     //Calculando a duração
        diaf = dia2 - dia1;
        horaf = hora2 - hora1;
        minf = min2 - min1;
        segf = seg2 - seg1;

    //ajustando casos negativos
        if (segf < 0){
            segf += 60;
            minf--;
        }
        if (minf < 0){
            minf += 60;
            horaf--;
        }
        if (horaf < 0){
            horaf += 24;
            diaf--;
        }

     printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", diaf, horaf, minf, segf);

     return 0;

}

