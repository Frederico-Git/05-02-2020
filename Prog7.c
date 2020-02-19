#include <stdio.h>

main (){
    int resultado = 0;
    resultado = resultadoMultiplicacao(20,10,5);

    printf("A multiplicacao entre estes dois numeros sao: %d",resultado);

}   
    int resultadoMultiplicacao (int x,int y,int z){
        int Multiplicacao = 0;
        Multiplicacao = x * y * z;

        return Multiplicacao;
    }