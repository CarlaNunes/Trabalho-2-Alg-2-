#ifndef FUNCOES_H_
#define FUNCOES_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FALSE 0
#define TRUE !FALSE

typedef struct{
 char sobrenome[30];
 char nome[30];
 int KB;
 char filme[30];
}nome;

int carrega_grafo(/*PONTEIRO PARA O GRAFO*/);
#endif
