#include <stdio.h>
#include <stdlib.h>
#include "hashtable.h"
#include "lista.c"

hashtable* CriaTabela(int TABLE_SIZE){
    hashtable* temp = (hashtable*)malloc(sizeof(hashtable));
    temp->TABLE_SIZE = TABLE_SIZE;
    temp->table = (Lista**)malloc(TABLE_SIZE*sizeof(Lista*));
    for (int i = 0; i < TABLE_SIZE; i++){
        temp->table[i] = NULL;
        }
    return temp;
    }

int Hash(int chave, int TABLE_SIZE){
    return chave % TABLE_SIZE;
    }

void InsertHash(hashtable* tabela, int chave){
    int hash = Hash(chave, tabela->TABLE_SIZE);
    if (tabela->table[hash] == NULL){
        tabela->table[hash] = criaLista();
        }
    append(tabela->table[hash], chave);  
    }

void LiberaTabela(hashtable* tabela){
    for (int i = 0; i < tabela->TABLE_SIZE; i++){
        if (tabela->table[i] != NULL){
            free(tabela->table[i]);
            }
        } 
    free(tabela->table);
    free(tabela);
    }

int buscaTable(hashtable* tabela, int chave){
    int hash = Hash(chave, tabela->TABLE_SIZE);
    if (tabela->table[hash] == NULL) return 0;
    if (search(tabela->table[hash], chave) == -1) return 0;
    return 1;
    }
