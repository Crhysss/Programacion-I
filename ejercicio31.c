#include <stdio.h>
//este programa pide ingresar un numero hasta que se ingrese 0 para terminar y calcula
//el promedio de los numeros terminados en 5
int main(){
    //x guarda el numero ingresado pero se inicializa en 1 para que mas adelante se cumpla la condicion
    //suma es un acumulador e "i" es un contador
    int x=1,sum=0,i=0;
    float prom;
    //secuencia repetitiva en donde la condicion es que el numero ingresado sea diferente de 0
    while(x!=0)
    {
        printf("Ingrese un numero, 0 si desea terminar\n");
        scanf("%d",&x);  
       //esta es la condicion que identifica si el numero termina en 5
       //Esta expresión calcula el resto de la división de x entre 10, es decir, 
       //el último dígito de x, y compara si es igual a 5. 
       //De esta manera, se puede determinar si el número ingresado por el usuario termina en 5.
        if(x%10==5)
        {
            i++;
            sum += x;
            
        }
    }
    //esta parte calcula el promedio entre los numeros terminado en 5
    prom=sum/i;
    printf("El promedio de numeros terminados en 5 es %f", prom);
    return 0;
}