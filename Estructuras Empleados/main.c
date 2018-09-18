#include <stdio.h>
#include <stdlib.h>
#define CANT 3

struct eEmpleado
{
    int legajo;
    char nombre[31];
    float salario;
    int isEmpty;
};

int main()
{
    struct eEmpleado emple[CANT];
    int i;

    for(i=0;i<CANT;i++)
    {
        printf("ingrese el N* de legajo:\n");
        scanf("%d",&emple[i].legajo);

        printf("ingrese el nombre:\n");
        fflush(stdin);
        scanf("%s",emple[i].nombre);

        printf("ingrese el salario:\n");
        scanf("%f",&emple[i].salario);

        emple[i].isEmpty= 0;


    }

    system("cls");

        for(i=0;i<CANT;i++)
        {
            printf("\n\nDatos Personales:\n\nLegajo:%d\nNombre:%s\nSalario:%.2f\n",emple[i].legajo,emple[i].nombre,emple[i].salario);
        }


    return 0;
}
