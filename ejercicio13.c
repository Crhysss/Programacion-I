#include <stdio.h>
//este programa pide que se ingrese un numero y muestra los numeros multiplos de 5 entre 1 y el numero que se ingresó

int main() {
    //x guarda el numero ingresado e "i" es el contador para la secuencia repetitiva
    int x, i;
    
    printf("Ingrese un numero: ");
    scanf("%d", &x);
    printf("Los multiplos de 5 entre 1 y %d es/son: ", x);
    //esta es la secuencia for se inicia en 1 por eso x=1
    //esta secuencia imprime los numeros entre 1 y el numero ingresado
    for(i = 1; i <= x; i++) {
        //esta es la condicion que donde se determina si el numero es multiplo de 5
        //si el restante entre la division del numero con 5 es 0 entonces es multiplo de 5
        if(i % 5 == 0) {
            printf("%d ", i);
        }
    }
    
    return 0;
}
