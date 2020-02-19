#include <stdio.h>

int main (void){
    char nome [100];
    char sexo;
    int idade;

    printf("Qual o seu nome? \n");
    scanf(" %s", nome);

    printf("Qual o seu sexo? \n");
    scanf(" %c", &sexo);

    printf(" Qual a sua idade? \n");
    scanf(" %d", &idade);

    if (sexo == 'f' || sexo == 'F' && idade < 25)
    {
        printf("%s ACEITA \n",nome);
    }
    else
    {
        printf("NAO ACEITA \n");
    }
    
}