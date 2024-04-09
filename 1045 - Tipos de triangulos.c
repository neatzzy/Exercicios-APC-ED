#include <stdio.h>

int main() {
    double A, B, C, A2, B2, C2, temp;

    // Le input
    scanf("%lf %lf %lf", &A, &B, &C);

    // Ordena os lados em ordem decrescente
    if (B > A)
    {
        temp = A;
        A = B;
        B = temp;
    }
    if (C > A)
    {
        temp = A;
        A = C;
        C = temp;
    }
    if (C > B)
    {
        temp = B;
        B = C;
        C = temp;
    }

    // Salva os quadrados
    A2 = A * A;
    B2 = B * B;
    C2 = C * C;

    // Verifica o tipo de triângulo
    if (A >= B + C)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else if (A2 == B2 + C2)
    {
        printf("TRIANGULO RETANGULO\n");
    }
    else if (A2 > B2 + C2)
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if (A2 < B2 + C2)
    {
        printf("TRIANGULO ACUTANGULO\n");
    }

    // Verifica se o triângulo é equilátero ou isósceles
    if (A == B && B == C)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    else if (A == B || B == C || A == C)
    {
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}
