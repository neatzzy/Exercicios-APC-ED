#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct aluno{
    int mencao;
    char nome[100];
    char sobrenome[100];
} aluno;

int cmp(const void *a, const void *b){
    aluno *alunoA = (aluno *)a;
    aluno *alunoB = (aluno *)b;

    if(alunoA->mencao != alunoB->mencao){
        return alunoA->mencao - alunoB->mencao;
    }

    if(strcmp(alunoA->nome, alunoB->nome) != 0){
        return strcmp(alunoA->nome, alunoB->sobrenome);
    }

    return strcmp(alunoA->sobrenome, alunoB->nome);
}


int main(){
    int n;
    scanf("%d", &n);

    aluno alunos[n];

    for(int i = 0 ; i < n ; i++){
        char aux[3];
        scanf("%s %s %s", aux, alunos[i].nome, alunos[i].sobrenome);

        if(strcmp(aux, "SS") == 0){
            alunos[i].mencao = 0;
        }else if(strcmp(aux, "MS") == 0){
            alunos[i].mencao = 1;
        }else if(strcmp(aux, "MM") == 0){
            alunos[i].mencao = 2;
        }else if(strcmp(aux, "MI") == 0){
            alunos[i].mencao = 3;
        }else if(strcmp(aux, "II") == 0){
            alunos[i].mencao = 4;
        }else if(strcmp(aux, "SR") == 0){
            alunos[i].mencao = 5;
        }
    }

    qsort(alunos, n, sizeof(aluno), cmp);

    for(int i = 0 ; i < n ; i++){
        char aux[3];
        if(alunos[i].mencao == 0){
            strcpy(aux, "SS");
        }else if(alunos[i].mencao == 1){
            strcpy(aux, "MS");
        }else if(alunos[i].mencao == 2){
            strcpy(aux, "MM");
        }else if(alunos[i].mencao == 3){
            strcpy(aux, "MI");
        }else if(alunos[i].mencao == 4){
            strcpy(aux, "II");
        }else if(alunos[i].mencao == 5){
            strcpy(aux, "SR");
        }
        printf("%s %s %s\n", aux, alunos[i].nome, alunos[i].sobrenome);
    }

    return 0;
}