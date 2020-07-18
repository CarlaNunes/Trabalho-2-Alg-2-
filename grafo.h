#define MAXNUMVERTICES 100
#define NULO NULL


typedef struct{
    char nome[15];
    char sobrenome[15];
    char peso[30];//O nome do filme
    struct taresta *prox;
}taresta;

typedef taresta* tapontador;

typedef struct{
    tapontador vet[MAXNUMVERTICES];
    int num_vertices;

}tgrafo;
