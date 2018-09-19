/* Funciones de SUMA, RESTA, MULTIPLICACION, DIVICION, FACTORIAL*/
/*Factorial:*/
int factorial(int num)
{
    int contador,acumuladorUno=0;

    if(num<0)
    {
        return -1;
    }
    else
    {
        if(num==0 || num==1)
        {
            return 1;
        }
        else
        {
            for(contador=num-1; contador!=0; contador--)
            {
                acumuladorUno= num*contador+acumuladorUno;
            }

        }
            return acumuladorUno;
    }

}

/****************************************************************************/

/*SUMA:*/
float suma(float num1, float num2)
{
    int resultado;
    resultado= num1 + num2;
    return resultado;
}
/****************************************************************************/

/*RESTA:*/
float resta(float num1, float num2)
{
    int resultado;
    resultado= num1 - num2;
    return resultado;
}

/****************************************************************************/

/*MULTIPLICACION:*/
float multiplicacion(float num1, float num2)
{
    int resultado;
    resultado= num1 * num2;
    return resultado;
}

/****************************************************************************/

/*DIVICION:*/
float division(float num1, float num2)
{
    int resultado;
    resultado= num1 / num2;
    return resultado;
}

/*****************************************************************************/

/*BAJA:*/
void baja(ePersona pers[],int cantidad)
{
    int i;
    long int dniAux;
    char respuesta;

    for(i=0;i<catidad;i++)
    {
        if(dniAux==pers[i].dni)
        {
            printf("%s %s %d", pers[i].apellido,pers[i].nombre,pers[i].dni);

            do
            {
                printf("Eliminar Registro? S/N");
                fflush(stdin);
                respuesta=getc();
            }while(respuesta!="S" && respuesta!="N");
        }
    }
}

/******************************************************************************************/

//*ALTA:*/
void alta(ePersona pers[])
{
    int indice;

        indice= obtenerEspacio(pers, CANT);

            if(indice!=-1)
            {
                printf("Nombre:\n");
                scanf("%s", pers[i].nombre);

                printf("Apellido:\n");
                fflush(stdin);
                scanf("%s", pers[i].apellido);

                printf("DNI:\n");
                scanf("%d", &pers[i].dni);

                printf("Fecha de Nacimiento: (dd/dd/dddd)\n");
                scanf("%d", &pers[i].fechaNac);

                pers[i].isEmpty = 0;
            }
}

/***************************************************************************************/

//*OBTENER ESPACIO:*/


