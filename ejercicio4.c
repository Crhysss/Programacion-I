#include <stdio.h>
//*este programa pide que se ingrese dos numeros que van a ser los limites
//para despues mostrar los numeros enteros entre esos limites
int main(){
    //"x" y "y" guaradna los numeros limites
    //mientras que i es el contador
    int x,y, i;
    printf("Ingrese dos numeros limites\n");
    scanf("%d\n",&x);
    scanf("%d",&y);
    printf("Los numeros entre los limites son:\n");
    //esta es la secuencia repetitiva imprime todos los numeros si se cumple la condición
    //para que los numeros limites no se impriman
    //a x se le suma uno para que muestre el siguiente y a "y" se le resta uno para que muestre el anterior
    for(i=x+1; i<=y-1; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}