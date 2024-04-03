#include <stdio.h>
 
int main() {
 
 const double pi = 3.14159;
 double A, B, C;
 float areaTri, areaCirc, areaTrap, areaQuad, areaRet;
 
 scanf("%lf %lf %lf", &A, &B, &C); 
 if ((A <= 0) || (B <=0) || (C<=0)){
     return 0;
 }
 areaTri = (A*C)/2.0;
 areaCirc = pi*(C*C);
 areaTrap = ((A+B)*C)/2;
 areaQuad = B*B;
 areaRet = A*B;
 
 printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n", areaTri, areaCirc, areaTrap, areaQuad, areaRet);
 
    return 0;
}