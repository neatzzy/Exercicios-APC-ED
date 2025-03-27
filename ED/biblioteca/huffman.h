#ifndef HUFFMAN_H
#define HUFFMAN_H

typedef struct Node{
    char c;
    int freq;
    struct Node *esq, *dir;
}Node;

typedef struct Arvore{
    Node* raiz;
} Arvore;

void montaTabelaFrequencia(char* texto, int* tabelaFrequencia);

Arvore* montaArvoreHuffman(int* tabelaFrequencia);

#endif // HUFFMAN_H