#include <stdio.h>
#include <stdlib.h>

//int suma(int,int); //prototipo o declaracion.

int main()
{
    int nro1, nro2, res;

    printf("numero 1:");
    scanf("%d",&nro1);
   printf("numero 2:");
    scanf("%d",&nro2);
    res=suma(nro1,nro2); // llamo a la funcio.
    printf("resultado: %d",res);
    return 0;
}

int suma(int op1, int op2)
{
    int total;
    total=op1+op2;
    return total;
}
