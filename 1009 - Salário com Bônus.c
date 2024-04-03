#include <stdio.h>

int main() {
    char nome[50];
    double salario, vendas, comissao, total;

    scanf("%s", nome);
    scanf("%lf", &salario);
    scanf("%lf", &vendas);

    comissao = 0.15 * vendas;

    total = salario + comissao;

    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}
