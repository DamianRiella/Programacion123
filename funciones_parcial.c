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

