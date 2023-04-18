#include <stdio.h>

int main() {
    int num, conta = 0;
    
    printf("Ingrese un numero: ");
    scanf("%d", &num);
    
    while(num != 0) {
        if(num % 10 == 1) {
            conta++;
        }
        num /= 10;
    }
    
    printf("El numero tiene %d digitos 1\n", conta);
    
    return 0;
}
