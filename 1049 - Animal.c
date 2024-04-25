#include <stdio.h>
#include <string.h>

int main(){
    char vert[20];
    char classe[20];
    char alim[20];

    scanf("%s %s %s", vert, classe, alim);
    if((strcmp(vert, "vertebrado") == 0)){
        if((strcmp(classe, "ave") == 0)){
            if((strcmp(alim, "carnivoro") == 0)){
                printf("aguia\n");
            }
            else{
                printf("pomba\n");
            }
        }
        else{
            if((strcmp(alim, "onivoro") == 0)){
                printf("homem\n");
            }
            else{
                printf("vaca\n");
            }
        }
    }
    else{
        if((strcmp(classe, "inseto") == 0)){
            if((strcmp(alim, "hematofago") == 0)){
                printf("pulga\n");
            }
            else{
                printf("lagarta\n");
            }
        }
        else{
            if((strcmp(alim, "hematofago") == 0)){
                printf("sanguessuga\n");
            }
            else{
                printf("minhoca\n");
            }
        }
    }
    return 0;
}
