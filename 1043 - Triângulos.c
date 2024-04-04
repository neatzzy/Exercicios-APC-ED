#include <stdio.h>

int main(){

float a, b, c;

scanf("%f %f %f", &a, &b, &c);
if((a < (b + c)) && (b < (a + c)) && (c < (b + a))){
    float perimetro = a + b + c;
    printf("Perimetro = %.1f\n", perimetro);
    return 0;
}
else{
    float area = ((a+b)*c)/2;
    printf("Area = %.1f\n", area);
    return 0;
}
}