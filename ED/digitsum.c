#include <stdio.h>

unsigned long long int superdigit(unsigned long long nro){
    if(nro < 10){
        return nro;
    }
    unsigned long long int temp = nro, size = 0;

    while(temp > 0){
        temp /= 10;
        size++;
    }

    char str[size];
    sprintf(str, "%llu", nro);

    unsigned long long int soma = 0;
    for(int i = 0; i < size; i++){
        soma += str[i] - '0';
    }

    return superdigit(soma);

}

int main(){
    char c;
    unsigned long long int k, soma = 0, tam = 0;

    while(scanf("%c", &c)){
        if(c == ' ') break;
        soma += c - '0';
    }
    scanf("%llu", &k);

    soma *= k;

    printf("%llu\n", superdigit(soma));

    return 0;
}