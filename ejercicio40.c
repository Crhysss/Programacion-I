#include <stdio.h>
//este programa pide que se ingrese un numero de dos digitos para determinar si forma parte de la secuencia Fibonnaci
//la secuencia Fibonacci es la secuencia formada por la suma de dos numeros anteriores 0 1 1 2 3 5 ....
int main() {
    //num guarda el numero igresado
    //a b y c son variables usadas para crear la secuencia Fibonacci
    int num, a = 0, b = 1, c = 0;
    printf("Ingrese un numero de dos digitos: ");
    scanf("%d", &num);
    //esta es la secuencia repetitiva en donde se realiza la secuencia Fibonacci
    //hasta llegar al numero ingresado
    while (c < num) {
        c = a + b;
        a = b;
        b = c;
    }
    //en esta condicion se determina si en algun momento de la secuencia se encuentra el numero ingresado
    //por eso si c (resultado de la secuencia) llega a ser igual al numero ingresado entonces se imprime que forma parte
    //de lo contrado se imprime que no forma parate de la secuencia Fibonnaci
    if (c == num) {
        printf("%d es parte de la serie de Fibonacci.\n", num);
    } else {
        printf("%d no es parte de la serie de Fibonacci.\n", num);
    }
    return 0;
}
