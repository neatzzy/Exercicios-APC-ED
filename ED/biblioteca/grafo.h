#ifndef GRAFO_H
#define GRAFO_H

typedef struct Grafo{
    int eh_ponderado;
    int nro_vertices;
    int grau_max;
    int** arestas;
    float** pesos;
    int* grau;
    }Grafo;

Grafo* criaGrafo(int nro_vertices, int grau_max, int eh_ponderado);

void liberaGrafo(Grafo* grafo);

int insereAresta(Grafo* grafo, int orig, int dest, float peso);

int removeAresta(Grafo* grafo, int orig, int dest);

void imprimeGrafo(Grafo* grafo);

#endif