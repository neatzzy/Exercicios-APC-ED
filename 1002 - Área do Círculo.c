#include <stdio.h>
 
int main() {
 
    const double pi = 3.14159;
    double raio;
    scanf ("%lf", &raio);
    double A = pi*(raio*raio);
    printf ("A=%.4lf\n", A);
 
    return 0;
}