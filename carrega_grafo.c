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

tvertice *get_ator (tgrafo **grafo, char *ator) {
    tvertice *vertice = (*grafo)->vertice;
    while (vertice != NULL) {
       if (strcmp(ator, vertice->nomeCompleto) == 0) {
           return vertice;           
       }
       vertice = vertice->proximo;
    }

    return NULL;
}

int carrega_grafo (tgrafo **grafo) {

    FILE *fp = fopen("input-top-grossing.txt" ,"r");
    char linha[MAX_TAMANHO_LINHA];

    if (fp == NULL) {
        return FALSE;   
    }

    tvertice **insere_ator = &((*grafo)->vertice);
    while (fgets(linha, MAX_TAMANHO_LINHA, fp) != NULL ) {
       
        /* Extrai informações */
        char *token = strtok(linha, DELIMITADOR);
      
        if (token == NULL) {
            continue;
        }  
        char filme[100];
        memset(filme, '\0', 100);
        strcpy(filme, token);
        

        char atores[MAX_NUM_ATORES][100];
        int i = 0, j = 0, num_atores = 0;

        token = strtok(NULL, DELIMITADOR);
        while( token != NULL ) {
            memset(atores[i], '\0', 100);
            strcpy(atores[i], token);
            i += 1;

            /* printf("- %s\n", atores[i] ); */
            token = strtok(NULL, DELIMITADOR);
        } 
        
        num_atores = i;

        /* Preenche o grafo */
        for (i = 0; i < num_atores; ++i) {
            tvertice *ator = get_ator(grafo, atores[i]);
            if (ator == NULL) {
                tvertice *novo_ator = (tvertice*) malloc(sizeof(tvertice));
                memset(novo_ator->nomeCompleto, '\0', sizeof(novo_ator->nomeCompleto));
                strcpy(novo_ator->nomeCompleto, atores[i]);
                novo_ator->proximo = NULL;

                if ((*insere_ator) == NULL) {
                    (*insere_ator) = novo_ator;
                } else {
                    (*insere_ator)->proximo = novo_ator;
                }
                insere_ator = &(novo_ator->proximo);

                ator = novo_ator;

                (*grafo)->num_vertices += 1;
            }

            taresta **insere_aresta= &(ator->aresta);

            //Vai para o fim da lista de arestas
            while ((*insere_aresta) != NULL) {
                insere_aresta = &((*insere_aresta)->proxima);
            }

            for (j = 0; j < num_atores; ++j) {
                /* Não liga um ator com ele mesmo */
                if (i != j) {
                    /* printf("Liga ator %s com %s\n", atores[i], atores[j]); */
                    taresta *nova_aresta = (taresta*) malloc(sizeof(taresta));
                    memset(nova_aresta->nomeFilme, '\0', sizeof(nova_aresta->nomeFilme));
                    strcpy(nova_aresta->nomeFilme, filme);
                    nova_aresta->proxima = NULL;

                    if ((*insere_aresta) == NULL) {
                        (*insere_aresta) = nova_aresta;
                    } else {
                        (*insere_aresta)->proxima = nova_aresta;
                    }
                    insere_aresta = &(nova_aresta->proxima);
                }
            }
        }

    }

    fclose(fp);
    return TRUE;
}
