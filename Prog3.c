#include <stdio.h>

int soma = 0;
int caixa [10];
int x;

int main (void){

    printf("10 Array e calulcar a soma e apresentar o resultado \n");
    srand( time(0));

    for (x = 0; x < 10 ; x++)
    {
        caixa[x] = rand() %10;
        printf("O numero das caixas sao: %d\n",caixa[x]);
        soma = soma + caixa[x];
        //printf("Quais sao os valores para as 10 caixas? \n");
        //scanf(" %d", &caixa[x]);
    }
    
    printf("A soma e: %d\n",soma);
}