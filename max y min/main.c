#include <stdio.h>
#include <stdlib.h>
#define esc 27
#include <conio.h>

int main()
{
    system("cls");
    char respuesta;
    int max,min,numero,flag=0;

  do
  {
      printf("\n Ingrese un numero: ");
      scanf("\n %d",&numero);


      if(max<numero || flag==0)
      {
          max=numero;
      }
      if(min>numero || flag==0)
      {
          min=numero;
          flag=1;
      }

    printf("\n Desea seguir ingresando numeros? o precione ESC:");
    respuesta = getch();


  }while(respuesta!= esc);

  printf("\n El numero maximo es: %d", max);
  printf("\nEl numero minimo es: %d", min);

  return 0;

}
