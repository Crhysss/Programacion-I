#include <stdio.h>

int main() {
    int x, i;
    
    printf("Ingrese un numero: ");
    scanf("%d", &x);
    
    printf("Los multiplos de 5 entre 1 y %d es/son: ", x);
    for(i = 1; i <= x; i++) {
        if(i % 5 == 0) {
            printf("%d ", i);
        }
    }
    
    return 0;
}
