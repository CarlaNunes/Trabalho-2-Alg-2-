#define MAXNUMVERTICES 100
#define NULO NULL



typedef struct{
    int num_vertices;
    char vertNomeFilme[45];//Vai na matriz peso
    int grau_max;
    char **arestas;//Matriz com o linha vertice vai o nome do ator  e a coluna com quem ele liga;
    char **peso;//Matriz que vai o nome do filme e com quem ele liga(ator);
    char nomeCompleto[65];//Esse valor vai para os vertices;
}tgrafo;

