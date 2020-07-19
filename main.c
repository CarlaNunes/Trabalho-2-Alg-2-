#include "funcoes.h"
#include "grafo.h"

int main(int argc, char *argv[])
{

    printf("***********************Bem-vindo ao mundo de Kevin Bacon***********************\n");

    printf("Carregando...\n");

    tgrafo *grafo;
    if (!cria_grafo(&grafo)) {
        printf("Erro ao criar grafo\n");
        return EXIT_FAILURE;
    }
    
    if (!carrega_grafo(&grafo)){
        printf("Erro ao carregar informações\n");
        return EXIT_FAILURE;
    }

    /* PRINTA GRAFO */
    /* tvertice *vertice = grafo->vertice; */
    /* while (vertice != NULL) { */
    /*    printf("VERTICE: %s\n", vertice->nomeCompleto); */
    /*    taresta *aresta= vertice->aresta; */
    /*    while (aresta != NULL) { */
    /*        printf("- ARESTA: %s\n", aresta->nomeFilme); */
    /*        aresta = aresta->proxima; */
    /*    } */
    /*    vertice = vertice->proximo; */
    /* } */
    /* printf("GRAFO POSSUI %d VERTICES\n", grafo->num_vertices); */

    /* while (true)  */
        /*Loop principal*/
    /* } */

    /* deleta_grafo(grafo); */
    printf("Bye-bye!\n");
    return EXIT_SUCCESS;
}
