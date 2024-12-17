#include <stdio.h>
 
int main() {
 
    const double pi = 3.14159;
    double raio, volume;

scanf("%lf", &raio);
if (raio <= 0) {
    return 0;
}
volume = (4.0/3)*pi*(raio*raio*raio);
printf("VOLUME = %.3lf\n", volume);
 
    return 0;
}