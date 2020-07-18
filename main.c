#include "funcoes.h"

int main(int argc, char *argv[])
{

    printf("***********************Bem-vindo ao mundo de Kevin Bacon***********************\n");

    printf("Carregando...\n");

    /*Iniciar TAD aqui e passar para a função carrega_grafo*/
    
    if (!carrega_grafo(/*PONTEIRO_PARA_O_GRAFO*/)){
        printf("Erro ao carregar informações\n");
        return EXIT_FAILURE;
    }

    /* while (true)  */
        /*Loop principal*/
    /* } */

    /*Finalizar TAD aqui*/
    return EXIT_SUCCESS;
}
