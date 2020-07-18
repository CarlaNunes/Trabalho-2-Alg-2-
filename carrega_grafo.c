#include "funcoes.h"

#define MAX_TAMANHO_LINHA 2500
#define DELIMITADOR "/"

#define MAX_NUM_ATORES 100

/*
 * typedef struct aresta{
 *     char nomeFilme[60];
 *     struct aresta *proxima;
 * }taresta;
 *
 * typedef struct vertice{
 *     char nomeCompleto[30];
 *     struct vertice *proximo;
 *     taresta *arestas;
 * }tvertice;
 *
 * typedef struct{
 *     int num_vertices;
 *     tvertice *vertices;
 * }tgrafo;
 */

int carrega_grafo (tgrafo *grafo) {

    FILE *fp = fopen("input-top-grossing.txt" ,"r");
    char linha[MAX_TAMANHO_LINHA];

    if (fp == NULL) {
        return FALSE;   
    }

    while (fgets(linha, MAX_TAMANHO_LINHA, fp) != NULL ) {
       
        /* Extrai informações */
        char *filme = strtok(linha, DELIMITADOR);
      
        if (filme == NULL) {
            continue;
        }  
        printf("FILME: %s\n", filme);

        char *atores[MAX_NUM_ATORES];
        int i = 0, j = 0;

        atores[0] = strtok(NULL, DELIMITADOR);
        while( atores[i] != NULL ) {
          printf("- %s\n", atores[i] );
          atores[++i] = strtok(NULL, DELIMITADOR);
        } 

        /* Preenche o grafo */
        for (i = 0; atores[i] != NULL; ++i) {
            for (j = 0; atores[j] != NULL; ++j) {
                /* Não liga um ator com ele mesmo */
                if (i != j) {
                    printf("Liga ator %s com %s\n", atores[i], atores[j]);
                }
            }
        }
    }

    fclose(fp);
    return TRUE;
}
