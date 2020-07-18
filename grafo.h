#define MAXNUMVERTICES 100
#define NULO NULL


typedef struct{
    char peso[30];//O nome do filme
    struct taresta *prox;
}taresta;

typedef struct{
    char nome[15];
    char sobrenome[15];
}tvertice;

typedef taresta* tapontador;

typedef struct{
    tapontador vet[MAXNUMVERTICES];
    int num_vertices;

}tgrafo;

