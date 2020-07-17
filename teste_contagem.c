#include <stdio.h>

int main() {
    FILE* arquivo = fopen("input-top-grossing.txt", "r");
    if(arquivo == NULL) {
        fprintf(stderr, "Erro ao abrir o arquivo.txt.");
        return 1;
    }

    int contagem = 0;
    int caractere;
    do {
        caractere = fgetc(arquivo);
        if(caractere == '\n') {
            contagem++;
        }
    } while(caractere != EOF);
    //Para saber quantas structs iremos lidar.
    printf("O arquivo possui %d linhas.\n", contagem);
    
    
    fclose(arquivo);

    return 0;
}
