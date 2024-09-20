#include <stdio.h>
#include <strings.h>

int main(){
    int n, saida;
    char s[4];

    scanf("%d", &n);
    for(int i = 0 ; i < n ; i++){
        scanf("%s", s);

        if(s[0] == s[2]){
            saida = (s[0] - 48) * (s[0] - 48);
    }
        else if(s[1] >= 65 && s[1] <= 90){
            saida = (s[2] - 48) - (s[0] - 48);
        }
        else if(s[1] >= 97 && s[1] <= 122){
            saida = (s[0] - 48) + (s[2] - 48);
        }

        printf("%d\n", saida);
    }
    return 0;
}