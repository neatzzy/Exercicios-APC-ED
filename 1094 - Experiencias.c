#include <stdio.h>
#include <string.h>

int main(){
    double idx, n, qcob, total, prat, pcoe, psap;
    double rat = 0;
    double coe = 0;
    double sap = 0;
    char tcob[1];

    scanf("%lf", &n);

    for(idx = 0 ; idx < n ; idx++){
        scanf("%lf %c", &qcob, tcob);
        if(strcmp(tcob,"R") == 0){
            rat += qcob;
        }
        else if(strcmp(tcob,"C") == 0){
            coe += qcob;
        }
        else if(strcmp(tcob,"S") == 0){
            sap += qcob;
        }
    }

    total = rat + coe + sap;
    prat = (rat / total) * 100;
    pcoe = (coe / total) * 100;
    psap = (sap / total) * 100;

    printf("Total: %.0lf cobaias\n", total);
    printf("Total de coelhos: %.0lf\n", coe);
    printf("Total de ratos: %.0lf\n", rat);
    printf("Total de sapos: %.0lf\n", sap);
    printf("Percentual de coelhos: %.2lf %\n", pcoe);
    printf("Percentual de ratos: %.2lf %\n", prat);
    printf("Percentual de sapos: %.2lf %\n", psap);

    return 0;
}