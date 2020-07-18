#include "funcoes.h"
#include "grafo.h"

int main(int argc, char *argv[])
{

    printf("***********************Bem-vindo ao mundo de Kevin Bacon***********************\n");

    printf("Carregando...\n");

    tgrafo *grafo;
    if (!cria_grafo(grafo)) {
        printf("Erro ao criar grafo\n");
        return EXIT_FAILURE;
    }
    
    if (!carrega_grafo(grafo)){
        printf("Erro ao carregar informações\n");
        return EXIT_FAILURE;
    }

    /* while (true)  */
        /*Loop principal*/
    /* } */

    deleta_grafo(grafo);
    printf("Bye-bye!\n");
    return EXIT_SUCCESS;
}
