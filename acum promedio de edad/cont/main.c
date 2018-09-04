#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad,contador,acumulador=0;
    float promedio;

    for (contador=0;contador<5;contador++)
    {
        printf("edad:");
        scanf("\n %d",&edad);
        acumulador=acumulador+edad;

    }
    promedio = (float)acumulador/contador;
    printf("El promedio es: %.2f",promedio);
    return 0;
}
