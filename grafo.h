#include<stdio.h>
#include<stdlib.h>

typedef struct vertice{
    char nomeCompleto[30];
    struct vertice *proximo;
    taresta aresta;
}tvertice;

typedef struct aresta{
    char nomeFilme[60];
    struct aresta *proxima;
    struct aresta *anterior;
}taresta;

typedef struct{
    int num_vertices;
    tvertice vertice;
}tgrafo;

