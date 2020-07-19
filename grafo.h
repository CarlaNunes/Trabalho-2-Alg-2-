#ifndef GRAFO_H_
#define GRAFO_H_

#include<stdio.h>
#include<stdlib.h>
//Versão não testada.Tipo, não usei em uma função.

typedef struct aresta{
    char nomeFilme[100];
    struct aresta *proxima;
}taresta;

typedef struct vertice{
    char nomeCompleto[100];
    struct vertice *proximo;
    //A variavél,vai definir se tivermos um ator A com relação a outros atores ela irá aplicar o critério de Desempate.
    //Se o ator B não tiver um nome maior que A a variavél terá valor igual a 1 e o ator será inserido no vértice, caso contrário
    //Teremos um velor igual a Zero e o ator Seguinte será escolhido.Temos um critério de desempate.
    // int ehEmordem;
    taresta *aresta;
}tvertice;

typedef struct grafo{
    int num_vertices;
    tvertice *vertice;
}tgrafo;

typedef struct{
    int KB;
    int desvio_Padrao;
    int media;
}valores_adiconais;

int cria_grafo(tgrafo **grafo);
#endif
