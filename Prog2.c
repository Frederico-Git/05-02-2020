#include <stdio.h>

int main (void){
    int A;
    char nome [11];

    printf("Qual o seu nome? \n");
    scanf(" %s", nome);

    for (A = 0; A <= 3; A++)
    {
        printf(" %c", nome[A]);
        printf("\n \n");
    }
    getchar();
    return(0);
}