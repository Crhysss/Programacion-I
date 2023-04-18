#include <stdio.h>

int main() {
    int num, a = 0, b = 1, c = 0;
    printf("Ingrese un numero de dos digitos: ");
    scanf("%d", &num);
    while (c < num) {
        c = a + b;
        a = b;
        b = c;
    }
    if (c == num) {
        printf("%d es parte de la serie de Fibonacci.\n", num);
    } else {
        printf("%d no es parte de la serie de Fibonacci.\n", num);
    }
    return 0;
}
