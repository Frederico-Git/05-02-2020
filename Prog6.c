#include <stdio.h>

main (){
    int resultado = 0;
    resultado = resultadosubtracao(20,10);

    printf("A subtracao entre estes dois numeros sao: %d",resultado);

}   
    int resultadosubtracao (int x,int y){
        int subtracao = 0;
        subtracao = x - y;

        return subtracao;
    }
