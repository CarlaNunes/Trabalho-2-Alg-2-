#define MAXNUMVERTICES 100
#define NULO NULL

typedef char peso[30];//O nome do filme
typedef int tvertice;

typedef struct{
    tvertice vertice;
    tpeso peso;
    struct taresta *prox;
}taresta;

typedef taresta* tapontador;

typedef struct{
    tapontador vet[MAXNUMVERTICES];
    int num_vertices;
}tgrafo;
