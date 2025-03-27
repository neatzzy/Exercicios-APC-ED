#include <stdlib.h>
#include <stdio.h>
#include "grafo.h"

Grafo* criaGrafo(int nro_vertices, int grau_max, int eh_ponderado){
    Grafo* temp = (Grafo*)calloc(1, sizeof(Grafo));
    if(temp != NULL){
        int i;
        temp->nro_vertices = nro_vertices;
        temp->grau_max = grau_max;
        temp->eh_ponderado = (eh_ponderado != 0) ? 1 : 0;
        temp->grau = (int*)calloc(nro_vertices, sizeof(int));
        temp->arestas = (int**)calloc(nro_vertices, sizeof(int*));
        for(i = 0; i < nro_vertices; i++){
            temp->arestas[i] = (int*)malloc(grau_max * sizeof(int));
            if(temp->eh_ponderado){
                temp->pesos = (float**)malloc(nro_vertices * sizeof(float*));
                for(i = 0; i < nro_vertices; i++){
                    temp->pesos[i] = (float*)malloc(grau_max * sizeof(float));
                }
            }
        }
    }
    return temp;
}

void liberaGrafo(Grafo* grafo){
    if(grafo != NULL){
        int i;
        for(i = 0; i < grafo->nro_vertices; i++){
            free(grafo->arestas[i]);
        }
        free(grafo->arestas);
        if(grafo->eh_ponderado){
            for(i = 0; i < grafo->nro_vertices; i++){
                free(grafo->pesos[i]);
            }
            free(grafo->pesos);
        }
        free(grafo->grau);
        free(grafo);
    }
}

int insereAresta(Grafo* grafo, int orig, int dest, float peso){
    if(grafo == NULL){
        return 0;
    }
    if(orig < 0 || orig >= grafo->nro_vertices){
        return 0;
    }
    if(dest < 0 || dest >= grafo->nro_vertices){
        return 0;
    }
    grafo->arestas[orig][grafo->grau[orig]] = dest;
    if(grafo->eh_ponderado){
        grafo->pesos[orig][grafo->grau[orig]] = peso;
    }
    grafo->grau[orig]++;
    return 1;
}

int removeAresta(Grafo* grafo, int orig, int dest){
    if(grafo == NULL){
        return 0;
    }
    if(orig < 0 || orig >= grafo->nro_vertices){
        return 0;
    }
    if(dest < 0 || dest >= grafo->nro_vertices){
        return 0;
    }
    int i = 0;
    while(i < grafo->grau[orig] && grafo->arestas[orig][i] != dest){
        i++;
    }
    if(i == grafo->grau[orig]){
        return 0;
    }
    grafo->grau[orig]--;
    grafo->arestas[orig][i] = grafo->arestas[orig][grafo->grau[orig]];
    if(grafo->eh_ponderado){
        grafo->pesos[orig][i] = grafo->pesos[orig][grafo->grau[orig]];
    }
    return 1;
}

void imprimeGrafo(Grafo* grafo){
    if(grafo == NULL){
        return;
    }
    int i, j;
    for(i = 0; i < grafo->nro_vertices; i++){
        printf("%d: ", i);
        for(j = 0; j < grafo->grau[i]; j++){
            if(grafo->eh_ponderado){
                printf("%d(%.2f), ", grafo->arestas[i][j], grafo->pesos[i][j]);
            }else{
                printf("%d, ", grafo->arestas[i][j]);
            }
        }
        printf("\n");
    }
}
