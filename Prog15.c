#include <stdio.h>

float tempo,velocidade,consumo;

void main (){
    printf("Quanto tempo levou a viagem? \n");
    scanf(" %f", &tempo);

    printf("Qual foi a velocidade media que foi? \n");
    scanf(" %f", &velocidade);

    consumo = tempo * velocidade;

    printf("O consumo desta viagem foi: %0.2f\n",consumo);
}