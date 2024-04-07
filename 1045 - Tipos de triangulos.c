#include <stdio.h>

int main(){
    double a, b, c;

    scanf("%lf %lf %lf", &a, &b, &c);
    if((a == b) && (b == c)){
        printf("TRIANGULO ACUTANGULO\nTRIANGULO EQUILATERO\n");
    }
    else if ((a > b) && (a > c)){
        if (a >= b + c){
            printf("NAO FORMA TRIANGULO\n");
        }
        else if(a*a == b*b + c*c){
            printf("TRIANGULO RETANGULO\n");
        }
        else if(a*a < b*b + c*c){
            printf("TRIANGULO ACUTANGULO\n");
            if(b == c){
                printf("TRIANGULO ISOSCELES\n");
            }
        }
        else if(a*a > b*b + c*c){
            printf("TRIANGULO OBTUSANGULO\n");
            if(b == c){
                printf("TRIANGULO ISOSCELES\n");
            }
        }
    }
    else if ((b > a) && (b > c)){
      if (b >= a + c){
            printf("NAO FORMA TRIANGULO\n");
        }
        else if(b*b == a*a + c*c){
            printf("TRIANGULO RETANGULO\n");
        }
        else if(b*b < a*a + c*c){
            printf("TRIANGULO ACUTANGULO\n");
            if(a == c){
                printf("TRIANGULO ISOSCELES\n");
            }
        }
        else if(b*b > a*a + c*c){
            printf("TRIANGULO OBTUSANGULO\n");
            if(a == c){
                printf("TRIANGULO ISOSCELES\n");
            }
        }  
    }
    else if((c > a) && (c > b)){
        if (c >= b + a){
            printf("NAO FORMA TRIANGULO\n");
        }
        else if(c*c == b*b + a*a){
            printf("TRIANGULO RETANGULO\n");
        }
        else if(c*c < b*b + a*a){
            printf("TRIANGULO ACUTANGULO\n");
            if(b == a){
                printf("TRIANGULO ISOSCELES\n");
            }
        }
        else if(c*c > b*b + a*a){
            printf("TRIANGULO OBTUSANGULO\n");
            if(b == a){
                printf("TRIANGULO ISOSCELES\n");
            }
        }
    }
    else if ((a == c) && (a > b)){
        printf("TRIANGULO ACUTANGULO\nTRIANGULO ISOSCELES\n");
    }
    else if ((b == c) && (b > a)){
        printf("TRIANGULO ACUTANGULO\nTRIANGULO ISOSCELES\n");
    }
    else if ((a == b) && (a > c)){
        printf("TRIANGULO ACUTANGULO\nTRIANGULO ISOSCELES\n");
    }
    return 0;
}