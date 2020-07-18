#include <stdio.h>
#include <stdlib.h>
#ifndef NOME_H__
#define NOME_H__

typedef struct{
 char sobrenome[30];
 char nome[30];
 int KB;
 char filme[30];
}nome;
#endif

void retiraBarra(FILE *arq,FILE *arq2);
void separaNomeESobrenome(FILE *arq2,FILE *arq3);

int main()
{
    FILE *arq, *arq2,*arq3;
    arq2 = fopen("Pre_grafo2.txt","w");
    arq = fopen("input-top-grossing.txt" ,"r");


    if (arq2 == NULL || arq == NULL){
        printf("Erro de abertura\n");
        system("pause");
        exit(1);
    }
    retiraBarra(arq,arq2);
   separaNomeESobrenome(arq2,arq3);

    return 0;
}

void retiraBarra(FILE *arq,FILE *arq2){
    char letra;
    while( (letra = fgetc(arq)) != EOF )
    {
        if(letra =='/')
            letra='\n';
        fprintf(arq2, "%c", letra);
    }
    fclose(arq);
    fclose(arq2);
}

void separaNomeESobrenome(FILE *arq2,FILE *arq3){

    arq2 = fopen("Pre_grafo2.txt","r");
    arq3 = fopen("Pre_grafo_3.txt" ,"w");

    char letra;
    while( (letra = fgetc(arq2)) != EOF )
    {
        if(letra ==',')
            letra='\n';
        fprintf(arq3, "%c", letra);
    }
    fclose(arq2);
    fclose(arq3);
}

