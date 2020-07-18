#include<stdio.h>
#include<stdlib.h>
#include"grafo.h"

void Cria_Grafo(tgrafo grafo,int grau_max,int num_vertices){
   tgrafo *grafo = (tgrafo*)malloc(sizeof(struct grafo));
   if(grafo!=NULL){
        int i;
        grafo->num_vertices = num_vertices;
        grafo->grau_max = grau_max;
        grafo->arestas = (char**)malloc(num_vertices*sizeof(char*));
        grafo->peso = (char**)malloc(num_vertices*sizeof(char*));

   }
}
