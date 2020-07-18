#define MAXNUMVERTICES 100
#define NULO NULL


typedef int tvertice;

typedef struct{
    tvertice vertice;
     char peso[60];//Para colocar o nome do filme
    struct taresta *prox;
}taresta;

typedef taresta* tapontador;

typedef struct{
    tapontador vet[MAXNUMVERTICES];
    int num_vertices;
}tgrafo;
