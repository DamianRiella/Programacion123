#include <stdio.h>
#include <stdlib.h>
#define CANT 200
struct eFecha{
    int dia;
    int mes;
    int anio;
};

struct ePersona{
    long int dni;
    int isEmpty;
    char nombre[31];
    char apellido[31];
    struct eFecha fechaNac;
}
int main()
{
    struct ePersona pers[CANT];
    int i, opcion;


    do
    {
        printf("\nMenu\n\n");
        printf("\n\n1.Alta.");
        printf("\n2.Baja.");
        printf("\n3.Modificaciones.");
        printf("\n4.Salir");
        scanf("%d",&opcion);

      switch(opcion)
      {
          case 1:
                rintf("Legajo:\n");
                scanf("%d", &emple[i].legajo);

                printf("Nombre:\n");
                fflush(stdin);
                scanf("%s", emple[i].nombre);

                printf("Salario:\n");
                scanf("%f", &emple[i].salario);

                emple[i].isEmpty = 0;
          case 2:
          case 3:
          case 4:
                system("cls");
                break;
          default:
                system("cls");
                printf("La opcion ingresada es incorrecta.");
                break;
      }

    }while(opcion!=4);


}
