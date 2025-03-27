#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "huffman.h"

void montaTabelaFrequencia(char* texto, int* tabelaFrequencia){
    for(int i = 0; i < 128; i++){
        tabelaFrequencia[i] = 0;
    }

    for(int i = 0; i < strlen(texto); i++){
        tabelaFrequencia[texto[i]]++;
    }
}

Arvore* montaArvoreHuffman(int* tabelaFrequencia){
    Arvore* arvoreHuffman = (Arvore*) malloc(sizeof(Arvore));
    arvoreHuffman->raiz = NULL;

    Node* nos[128];

    for(int i = 0; i < 128; i++){
        if(tabelaFrequencia[i] > 0){
            Node* novoNo = (Node*) malloc(sizeof(Node));
            novoNo->c = i;
            novoNo->freq = tabelaFrequencia[i];
            novoNo->esq = NULL;
            novoNo->dir = NULL;

            nos[i] = novoNo;
        }else{
            nos[i] = NULL;
        }
    }

    while(1){
        Node* menor1 = NULL;
        Node* menor2 = NULL;

        for(int i = 0; i < 128; i++){
            if(nos[i] != NULL){
                if(menor1 == NULL){
                    menor1 = nos[i];
                }else if(menor2 == NULL){
                    menor2 = nos[i];
                }else if(nos[i]->freq < menor1->freq){
                    menor2 = menor1;
                    menor1 = nos[i];
                }else if(nos[i]->freq < menor2->freq){
                    menor2 = nos[i];
                }
            }
        }

        if(menor2 == NULL){
            arvoreHuffman->raiz = menor1;
            break;
        }

        Node* novoNo = (Node*) malloc(sizeof(Node));
        novoNo->c = -1;
        novoNo->freq = menor1->freq + menor2->freq;
        novoNo->esq = menor1;
        novoNo->dir = menor2;

        nos[menor1->c] = NULL;
        nos[menor2->c] = novoNo;
    }

    return arvoreHuffman;
}

void montaTabelaCodigos(Node* no, char tabelaCodigos[][100], char* codigo){
    if(no->c != -1){
        strcpy(tabelaCodigos[no->c], codigo);
    }else{
        char novoCodigo[100];
        strcpy(novoCodigo, codigo);

        strcat(novoCodigo, "0");
        montaTabelaCodigos(no->esq, tabelaCodigos, novoCodigo);

        strcpy(novoCodigo, codigo);
        strcat(novoCodigo, "1");
        montaTabelaCodigos(no->dir, tabelaCodigos, novoCodigo);
    }
}

void codificaTexto(char* texto, char tabelaCodigos[][100]){
    for(int i = 0; i < strlen(texto); i++){
        printf("%s", tabelaCodigos[texto[i]]);
    }
    printf("\n");
}


int main(){
    char textoOriginal [1000];
    fgets(textoOriginal, 1000, stdin);

    int tabelaFrequencia [128];
    montaTabelaFrequencia(textoOriginal, tabelaFrequencia);

    Arvore* arvoreHuffman = montaArvoreHuffman(tabelaFrequencia);

    char tabelaCodigos[128][100];

    montaTabelaCodigos(arvoreHuffman->raiz, tabelaCodigos, "");
    
    codificaTexto(textoOriginal, tabelaCodigos);

    return 0;
}