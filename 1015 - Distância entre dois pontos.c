#include <stdio.h>
#include <math.h>
 
int main() {
 
    float x1, y1, x2, y2;
    double dist;
    
    scanf("%f %f\n", &x1, &y1);
    scanf("%f %f\n", &x2, &y2);
    
    dist = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    
    printf("%.4lf\n", dist);
 
    return 0;
}