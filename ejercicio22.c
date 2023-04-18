#include <stdio.h>
//este programa pide que se ingrese un numero e indica cuantos numeros 1 tiene dicho numero 

int main() {
    //num guarda el numero ingresado y conta es el contador
    int num, conta = 0;
    
    printf("Ingrese un numero: ");
    scanf("%d", &num);
    //esta es la secuencia repetitiva en donde, a menos que se ingrese 0, se divide para 10 el numero 
    //y se contabiliza los numeros 1, es decir, dividiendo para 10 se desplaza la coma y eso permite 
    //contabilizar los 1
    
    while(num != 0) {
        if(num % 10 == 1) {
            conta++;
        }
        num /= 10;
    }
    
    printf("El numero tiene %d digitos 1\n", conta);
    
    return 0;
}
