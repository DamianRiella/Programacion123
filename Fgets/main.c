#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char buffer[64];
    int cantidad;

   // fgets(buffer,sizeof(buffer),stdin);
    //fgets(buffer,sizeof(buffer)-2,stdin);
    fgets(buffer,62,stdin);

    cantidad = strlen(buffer);
//le asigno el valor del buffer a la variable cantidad

    buffer[cantidad-1] = '\0';
//asigno al final de la cadena de caracteres un \0 para que corte y no haga enter.

    printf("%s", buffer);

    return 0;
}
