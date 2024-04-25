#include <stdio.h>

int main() {

const int hotdog = 1;
const int xsalada = 2;
const int xbacon = 3;
const int torrada = 4;
const int refri = 5;

int cod, qtd;

scanf("%d %d", &cod, &qtd);

if (cod == hotdog) {
    printf("Total: R$ %.2f\n", qtd * 4.00);
} else if (cod == xsalada) {
    printf("Total: R$ %.2f\n", qtd * 4.50);
} else if (cod == xbacon) {
    printf("Total: R$ %.2f\n", qtd * 5.00);
} else if (cod == torrada) {
    printf("Total: R$ %.2f\n", qtd * 2.00);
} else if (cod == refri) {
    printf("Total: R$ %.2f\n", qtd * 1.50);
}
return 0;   
}