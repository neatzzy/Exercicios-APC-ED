#include <stdio.h>
#include <string.h>

int Verifica(char senha[]);

int main(){
    char senha[50];

    while(scanf("%[^\n]", senha) != EOF){
        getchar();
        int res = Verifica(senha);

        switch(res){
            case 0:
                printf("Senha invalida.\n");
                break;

            case 1:
                printf("Senha valida.\n");
                break;
        }
    }
    return 0;
}

int Verifica(char senha[]){
    int nro = 0, min = 0, mai = 0, tam = strlen(senha);

    if((tam < 6) || (tam > 32)){
        return 0;
    }

    for(int i = 0 ; i < tam ; i++){
        if(senha[i] >= '0' && senha[i] <= '9'){
            nro = 1;
        }
        else if(senha[i] >= 'A' && senha[i] <= 'Z'){
            mai = 1;
        }
        else if(senha[i] >= 'a' && senha[i] <= 'z'){
            min = 1;
        }
        else{
            return 0;
        }
    }
    if(nro + mai + min == 3){
        return 1;
    }
    else{
        return 0;
    }
}   
