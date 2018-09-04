#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,num3,resultado;

    printf("Ingrese numero 1: ");
    scanf("%d",&num1);

    printf("Ingrese numero 2: ");
    scanf("%d",&num2);

    printf("Ingrese numero 3: ");
    scanf("%d",&num3);


    if(num1 > num2 && num1 > num3)
    {
        resultado=num1;
        printf("El valor mas alto es: %d", resultado);
    }
    else if(num2 > num3 && num2 > num1)
    {
        resultado=num2;
        printf("El valor mas alto es: %d", resultado);
    }
    else
    {
        resultado=num3;
        printf("El valor mas alto es: %d", resultado);
    }


    return 0;
}
