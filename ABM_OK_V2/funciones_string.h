#ifndef FUNCIONES_STRING_H_INCLUDED
#define FUNCIONES_STRING_H_INCLUDED

#include "empleado.h"

int inicializarArray(char *nombres[]);

int buscarLibre (char lista[][56], int* pIndex, int cantidadPos);

int getString(char *pResult,char *pMsg,char *pMsgError,int min,int max,int intentos);

int validarLetra (char letras[]);

#endif // FUNCIONES_STRING_H_INCLUDED
