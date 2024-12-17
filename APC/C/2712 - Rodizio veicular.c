#include <stdio.h>
#include <string.h>

int main(){
    int n;
    char placa[101];

    scanf("%d", &n);

    for(int i = 0; i < n ; i++){
        getchar();
        scanf("%[^\n]", placa);

        if((placa[0] >= 65) && (placa[0] <= 90) && (placa[1] >= 65) && (placa[1] <= 90) && (placa[2] >= 65) && (placa[2] <= 90) && (placa[3] == '-') && (placa[4] >= 48) && (placa[4] <= 57) && (placa[5] >= 48) && (placa[5] <= 57) && (placa[6] >= 48) && (placa[6] <= 57) && (placa[7] >= 48) && (placa[7] <= 57) && (placa[8] == '\0')){
            if((placa[7] == '1') || (placa[7] == '2')){
                printf("MONDAY\n");
            }else if((placa[7] == '3') || (placa[7] == '4')){
                printf("TUESDAY\n");
            }else if((placa[7] == '5') || (placa[7] == '6')){
                printf("WEDNESDAY\n");
            }else if((placa[7] == '7') || (placa[7] == '8')){
                printf("THURSDAY\n");
            }else if((placa[7] == '9') || (placa[7] == '0')){
                printf("FRIDAY\n");
            }
        }
        else{
            printf("FAILURE\n");
        }
    }
    return 0;
}