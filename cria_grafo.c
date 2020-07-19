#include "funcoes.h"

int cria_grafo(tgrafo **grafo){
    (*grafo) = (tgrafo*)malloc(sizeof(tgrafo));

    if ((*grafo) == NULL) {
        return FALSE;
    }

    (*grafo)->num_vertices = 0;
    (*grafo)->vertice = NULL;

    return TRUE;
}
