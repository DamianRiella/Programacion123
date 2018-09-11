#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*********************************************/
/* tener en cuenta que para asiganar un solo caracter
 lo encerramos en comillas simples· · y para una cadena comillas doblles " "*/


int main()
{
    char nombre[31];
    char apellido[61];
    char apeNom[62];
    int cantidad;

    printf("Nombre;");
    fgets(nombre, sizeof(nombre)-2, stdin);
    cantidad= strlen(nombre);
    nombre[cantidad-1]='\0';

    printf("Apellido:");
    fgets(apellido, sizeof(apellido)-2, stdin);
    cantidad= strlen(apellido);
    apellido[cantidad-1]='\0';

    strcpy(apeNom, apellido);
    //asignamos a apeNom el apellido.
    strcat(apeNom," ");
    //apeNom que ya tiene asignado el apellido le sumamos un espacion " ".
    strcat(apeNom,nombre);
    //por ultimo le sumamos nombre, para que nos quede el nombre completo.

    printf("%s",apeNom);


  return 0;
}



