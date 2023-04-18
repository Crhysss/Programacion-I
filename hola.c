#include <stdio.h>
int main(){
    int x,y, i;
    printf("Ingrese dos numeros limites\n");
    scanf("%d\n",&x);
    scanf("%d",&y);
    printf("Los numeros entre los limites son:\n");
    for(i=x+1; i<=y-1; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}