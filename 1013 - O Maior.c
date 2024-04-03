#include <stdio.h>
 
int main() {
 
    int A, B, C, maiorab, maiorabc;
    
    scanf("%d %d %d", &A, &B, &C);
    maiorab = (A+B+abs(A-B))/2;
    maiorabc = (maiorab+C+abs(maiorab-C))/2;
    printf("%d eh o maior\n", maiorabc);
 
    return 0;
}