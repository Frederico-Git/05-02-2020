#include <stdio.h>

int num1,num2,num3,media;

void main(){

    printf("Numero 1? \n");
    scanf(" %d",&num1);

    printf("Numero 2? \n");
    scanf(" %d",&num2);

    printf("Numero 3? \n");
    scanf(" %d",&num3);

    media = num1 + num2 + num3;

    printf("A media dos tres numeros sao: %d",media);
}