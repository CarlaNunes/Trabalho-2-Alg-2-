#ifndef GRAFO_H_
#define GRAFO_H_

typedef struct aresta{
    char nomeFilme[60];
    struct aresta *proxima;
    /*struct aresta *anterior;*/
}taresta;

typedef struct vertice{
    char nomeCompleto[30];
    struct vertice *proximo;
    taresta *arestas;
}tvertice;

typedef struct{
    int num_vertices;
    tvertice *vertices;
}tgrafo;

int cria_grafo (tgrafo *grafo);
int deleta_grafo (tgrafo *grafo);

#endif
