#include <stdio.h>
#include <string.h>

char nome [100];
int x, tamanho,contar = 0;

void main (){

    printf("Qual o seu nome? \n");
    scanf(" %s",nome);

    tamanho = strlen (nome);

    for ( x = 0; x <= tamanho -1 ; x++)
    {
        if (nome[x] == 'a' || nome[x] == 'A')
        {
            contar++;
        }

    }
    printf("O %s tem %d a's \n",nome,contar);
}