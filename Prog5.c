#include <stdio.h>

main(){
    int resultado = 0;
    resultado = realizarSoma (10,5);
    
    printf("A soma e: %d",resultado);

}
    int realizarSoma(int x, int y){
        int soma = 0;
        soma = x + y;

        return soma;
    }

