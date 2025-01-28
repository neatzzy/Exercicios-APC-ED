#ifndef HASHTABLE_H
#define HASHTABLE_H

#include "lista.h"

typedef struct hashtable{
    int TABLE_SIZE;
    Lista** table;
    } hashtable;

hashtable* CriaTabela(int TABLE_SIZE);

int hash(int chave, int TABLE_SIZE);

void InsertHash(hashtable* tabela, int chave);

void LiberaTabela(hashtable* tabela);

int buscaTable(hashtable* tabela, int chave);

#endif