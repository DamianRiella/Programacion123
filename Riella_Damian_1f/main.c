#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "negocio.h"
#include "funcionesPropias.h"

#define CANT_CLIENTES 100
#define CANT_JUEGOS 20
#define CANT_ALQUILERES 2000

int main()
{
    int respuesta, opc1, opcJuego, opcCliente, opcAlquileres;
    int auxCodigoJuego, auxCodigoCliente, auxCodigoAlquileres;
    int contaCodigoJuego=0, auxContaCodigoJuego=0, contaAltasJuegos=0;
    char auxNombreJuego[51], auxNombreCliente[51], auxApellidoCliente [51], auxDomicilioCliente[51], auxTelefonoCliente[21];
    char respModificacion;
    float auxValorJuego;

    eJuegos arrayJuegos[CANT_JUEGOS];
    eClientes arrayClientes[CANT_CLIENTES];
    eAlquileres arraAlquiler[CANT_ALQUILERES];

    do
    {
        ///Muestro menu y pido que elija una opcion.
         system("cls");
        utn_getNumeroAvanzada(&opc1, "------MENU PRINCIPAL------\n 1. Juegos \n 2. Clientes  \n 3. Alquileres  \n 4. Salir \n \n Seleccione una opcion: "," \n Seleccione una opcion valida.", 1, 4,3);

       switch(opc1)
       {
           /// Si opc1= 1 entra al menu de Juegos.
       case 1:

               do
               {
                   system("cls");
                   utn_getNumeroAvanzada(&opcJuego, "------MENU JUEGOS------\n 1. Alta \n 2. Modificar  \n 3. Baja \n 4. Listar  \n 5. Salir \n \n Seleccione una opcion: "," \n Seleccione una opcion valida.", 1, 5,3);
                    switch(opcJuego)
                    {
                    case 1:///Menu Altas.
                            do
                                {
                                    if (utn_getCadenaDeCaracteresAvanzada( auxNombreJuego, "\n Ingrese Descripcion: ", "La descripcion ingresada no es valido, debe estar compuesto solo por letras....\n", 3 ) != 1)
                                    break;


                                    if (utn_getNumeroConDecimalesAvanzada(& auxValorJuego, "\n Ingrese Valor: ", "El Valor ingresado no es valido, debe estar compuesto solo por numeros....\n ", 1,1000000 , 3  )!= 1)
                                    break;

                                    if (utn_getNumeroAvanzada(&auxCodigoJuego, "\n Ingrese Codigo: ", "El Codigo ingresado no es valido, debe ser numerico...\n ", 1 , CANT_JUEGOS, 3 ) != 1)
                                    break;

                                    contaCodigoJuego++;
                                    auxContaCodigoJuego= contaCodigoJuego;

                                    altaJuego(arrayJuegos, CANT_JUEGOS, auxCodigoJuego, auxNombreJuego, auxValorJuego);

                                    contaAltasJuegos ++;

                                    if (utn_getNumeroAvanzada(&respuesta, " \n DESEA CONTINUAR INGRESANDO DATOS: 1 (SI) -  2 (NO):", "No ingreso un dato valido, reintente por favor", 1, 2, 3) != 1)
                                    break;

                                } while (respuesta != 2);
                        break;
                    case 2:///Menu Modificar.
                       do
                       {

                        if(contaAltasJuegos>0)
                        {
                            modificar(arrayJuegos, CANT_JUEGOS);
                            break;

                        }
                        else
                        {
                            printf("No se encontraron juegos para modificar.");
                            getchar();
                            break;
                        }
                        printf("Desea continuar modificando datos? (s\n)")
                        fflush(string);
                        scanf("%c", respModificacion);

                       }while(respModificacion='s');

                    case 3:///Menu Baja.
                        break;
                    case 4:///Menu Listar.
                        break;
                    }
               }while(opcJuego != 5);

        break;
          /// Si opc1= 2 entra al menu de Clientes.
       case 2:

        break;
         /// Si opc1= 3 se dara de alta un nuevo alquiler.
       case 3:

        break;
       }


    }while(respuesta != 4);

}
