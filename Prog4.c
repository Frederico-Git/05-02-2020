#include <stdio.h>

int main (void){
    char nome [30];
    int x = 1;

    printf("Qual o seu nome? \n");
    scanf(" %s",nome);

    while (x < 10)
    {
        x = x + 1;
        printf(" %s",nome[x]);
    }
    printf ("\n");

    printf("Nome digitado: %d", nome[x]);

    printf(" \n \n");
    
    getchar();
    return(0);
}