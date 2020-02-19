#include <stdio.h>

char nome [100];
int tamanho;

void main (){

printf("Qual o nome? \n");
scanf(" %s", nome);

tamanho = strlen (nome);
printf(" O %s tem %d letras \n",nome,tamanho);
}