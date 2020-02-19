#include <stdio.h>

main (){
    int resultado = 0;
    resultado = resultadoDivisao(20,10,5);

    printf("A Divisao entre estes dois numeros sao: %d",resultado);

}   
    int resultadoDivisao (int x,int y,int z){
        int Divisao = 0;
        Divisao = x / y / z;

        return Divisao;
    }