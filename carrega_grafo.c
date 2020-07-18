#include "funcoes.h"

#define MAX_TAMANHO_LINHA 2500
#define DELIMITADOR "/"

int carrega_grafo(/*PONTEIRO_PARA_GRAFO*/) {

    FILE *fp = fopen("input-top-grossing.txt" ,"r");
    char linha[MAX_TAMANHO_LINHA];

    if (fp == NULL) {
        return FALSE;   
    }

    while (fgets(linha, MAX_TAMANHO_LINHA, fp) != NULL ) {
       char *token= strtok(linha, DELIMITADOR);
      
        if (token == NULL) {
            continue;
        }  
        printf("FILME: %s\n", token);

        token = strtok(NULL, DELIMITADOR);
        while( token != NULL ) {
          printf("- %s\n", token );
          token = strtok(NULL, DELIMITADOR);
        } 
    }

    fclose(fp);
    return TRUE;
}
