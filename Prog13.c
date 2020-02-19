#include <stdio.h>

int x,conta;

void main() {
    printf("Escolhe um numero? \n");
    scanf(" %d", &x);

    conta = x * x;

    printf("O numero era %d e o seu quadrado e: %d \n",x,conta);
}