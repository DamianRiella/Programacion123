#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "negocio.h"
#include "funcionesPropias.h"



int buscarCodigo(eJuegos arrayJuegos, int longitudArray, int id)
{
    int i;
    int retorno=-1;

    if (arrayJuegos!= NULL && longitudArray > 0)
    {
        for (i=0; i< longitudArray ; i++)
        {
            if (arrayJuegos[i].codigoJuego == id)
            {
                retorno= i;
                break;
            }
        }
    }
        return retorno;
}


/*****************************************************************************************************/

int altaJuego(eJuegos* arrayJuegos, int longitudArray, int id , char* name, float valor)
{
      int i;
      int retorno=-1;

    if (arrayJuegos!= NULL && longitudArray > 0)
    {
       i= utn_buscarLugarVacioEpersona(arrayJuegos, longitudArray);

       if (i != -1)
       {
           arrayJuegos[i].isEmpty=0;
           arrayJuegos[i].codigoJuego = id;
           strcpy (arrayJuegos[i].descripcion, name);
           arrayJuegos[i].importe=valor;

           retorno= 0;
       }
    }
        return retorno;
}
/*************************************************************************************/

int modificar(eJuegos* arrayJuegos, int longitudArray)
{
    retorno= -1;
    int i, index, axuIndex;

    utn_getNumeroAvanzada(& auxIndex, " \n Ingrese el codigo del juego que desea modificar: ", "El codigo ingresado debe ser numerico", 1, 20, 3);
    index= buscarCodigo(arrayJuegos, longitudArray, auxIndex);

    if(index==-1)
    {
         printf("No se encuentra ese codigo...\n");
         getchar();
         break;
    }

    do
    {
           utn_getNumeroAvanzada(&i, "\n 1. Modificar descripcion \n 2. Modificar valor \n 3. Salir. \n \n Seleccione una opcion: "," \n Seleccione una opcion valida.", 1, 3,3);

            switch(i)
            {
            case 1:
                utn_getCadenaDeCaracteresAvanzada( arrayJuegos[index].descripcion, "\n Ingrese descripcion: ", "La descripcion ingresada no es valido, debe estar compuesto solo por letras....\n", 3 );
                printf( "\n *****La descripcion fue modificado con exito. ****\n \n ");
                getchar();
                retorno= 0;
                break;
            case 2:
                utn_getNumeroConDecimalesAvanzada(& arrayJuegos[index].importe, "\n Ingrese valor: ", "El valor ingresado no es valido, debe estar compuesto solo por numeros....\n ", 1 , 1000000, 3  );
                printf( "\n *****El valor fue modificado con exito. ****\n \n ");
                getchar();
                retorno= 0;
                break;
            }
    }while(i!=3);

    return retorno;


}
