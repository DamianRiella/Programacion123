#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"


#define CANTIDAD_EMPLEADOS 6

int main()
{
    int edades[CANTIDAD_EMPLEADOS] = {50,10,30,1,10,22};


    int i;
    for(i=0;i < CANTIDAD_EMPLEADOS;i++)
    {
        if(utn_getEntero(&edades[i],"\nEdad?","\nEdad fuera de rango",0,200,2)==-1)
        {
            edades[i] = -1;
        }
    }

     utn_getFloat();
     return 0;
}






