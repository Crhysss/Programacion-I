#include <stdio.h>
int main(){
    int x=1,sum=0,i=0;
    float prom;
    
    while(x!=0)
    {
        printf("Ingrese un numero, 0 si desea terminar\n");
        scanf("%d",&x);  
       
        if(x%10==5)
        {
            i++;
            sum += x;
            
        }
    }
    prom=sum/i;
    printf("El promedio de numeros terminados en 5 es %f", prom);
    return 0;
}