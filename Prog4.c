#include <stdio.h>

int caixa [10];
int media = 0;
int x;

int main (void){

    printf("O programa vai fazer a media de 10 caixas \n");

    for ( x = 0; x < 10; x++)
    {
        caixa[x] = 10;
        printf("A media das caixas sao: %d\n",caixa[x]);
        media = (media + caixa[x]) / 10;
    }
    printf("A media e de: %d\n",media);
    
}