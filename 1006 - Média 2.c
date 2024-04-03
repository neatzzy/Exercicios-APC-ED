#include <stdio.h>
 
int main() {
 
    double A, B, C, media;
    scanf("%lf %lf %lf", &A, &B, &C);
    media = (2*A+ 3*B+ 5*C)/10.0;
    if ((A, B, C > 10) || (A, B, C < 0)) {
        return 0;
    }
    printf("MEDIA = %.1lf\n", media);
 
    return 0;
}