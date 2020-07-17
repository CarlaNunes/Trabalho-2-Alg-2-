
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *arq2, *arq;
    arq2=fopen("Pregrafo.txt","w");
    arq=fopen("input-top-grossing.txt" ,"r");

    if (arq2==NULL || arq==NULL){
        printf("Erro de abertura\n");
        system("pause");
        exit(1);
    }
    char letra;
    while( (letra = fgetc(arq)) != EOF )
    {
        if(letra =='/')
            letra='\n';
        fprintf(novo, "%c", letra);
    }
    fclose(arq);
    fclose(arq2);
    return 0;
}
