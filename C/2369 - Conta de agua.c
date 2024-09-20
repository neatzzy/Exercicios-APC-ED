#include <stdio.h>
 
int main() {
 
    int cons, prec;

    scanf("%d", &cons);

    if (cons <= 10)
    {
        prec = 7;
    }
    else if ((cons >= 11) && (cons <= 30))
    {
        prec = 7 + (cons - 10);
    }
    else if ((cons >= 31) && (cons <= 100))
    {
        prec = 27 + (2 * (cons - 30));
    }
    else if ((cons >= 101))
    {
        prec = 167 + (5 * (cons - 100));
    }
    
    printf("%d\n", prec);
 
    return 0;
}