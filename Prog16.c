#include <stdio.h>
#include <string.h>

char curso [100];
char keyword[] = "tecnico";
int resultado;

int main (void){

    printf(" Qual o seu curso? \n");
    fgets(curso, 100, stdin);

    //printf("Curso: ");
    //puts (curso);

    resultado = strcmp(curso,keyword);
    printf("Tem a palavra %d\n", resultado);
}