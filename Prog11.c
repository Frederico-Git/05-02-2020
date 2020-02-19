#include <stdio.h>

char nome [100];
int contar = 0, tamanho;

void main () {

    printf("Como se chama? \n");
    scanf(" %s", nome);

    tamanho = strlen (nome);

    for ( contar = 0; contar < tamanho; contar++)
    {
        printf(" %s \n",nome);
    }
    
}