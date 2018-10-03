#ifndef funcionesPropias.h
#define funcionesPropias.h

typedef struct
{
    int dia;
    int mes;
    int anio;

}eFecha;

typedef struct
{
    int codigoJuego;
    float importe;
    char descripcion[51];
    int isEmpty;

}eJuegos;

typedef struct
{
    int codigoCliente;
    char apellido[51];
    char nombre[51];
    char domicilio[51];
    char telefono[51];
    int isEmpty;

}eClientes;

typedef struct
{
    int codigoAlquileres;
    eJuegos codJuego;
    eClientes codCliente;
    eFecha fechaAlquiler;

}eAlquileres;
