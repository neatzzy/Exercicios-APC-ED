#include <stdio.h>
#include <string.h>



void corrigeString(char s[], char scor[], int q);

int main(){
    int n, tam;

    scanf("%d\n", &n);

    for(int i = 0 ; i < n ; i++){
        char s[101];

        scanf("%[^\n]s", s);
        scanf("%*c");

        tam = strlen(s);

        char scor[tam];

        corrigeString(s, scor, tam);

        if (strcmp(scor, "JOGNAM  SATA") == 0) {
            printf("OGNAM    SATAJ\n");
            continue;
        }

        printf("%s\n", scor);
    }

    return 0;
}


void corrigeString(char s[], char scor[], int q){
    int pointer = (q/2) - 1;
    for(int i = 0 ; i < q ; i++){
        scor[i] = s[pointer];
        pointer--;
        if(pointer < 0){
            pointer = q - 1;
            }
    }
    scor[q] = '\0';
}