#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#define CANT_EMPLEADOS 15

int main()
{
    //int indiceVacio;

    char arrayNombres[CANT_EMPLEADOS][50];//dos dimensiones cantidad de caracteres, y cant de nombres.Primer dimension es el indice.


    inicializarArray(arrayNombres,CANT_EMPLEADOS);//limpia el array y los inicia con \0

    ingresarRegistro("Ingrese nombre: ","Nombre inválido",2,50,3,arrayNombres);

/*
 indiceVacio = encontrarVacio(arrayNombres,3);
    strncpy(arrayNombres[indiceVacio],"JUAN\n",50);
    strncpy(arrayNombres[1],"JUAN1\n",50);
    strncpy(arrayNombres[2],"JUAN2\n",50);


    printArray(arrayNombres,3);

    int indiceRepetido = encontrarRepetido(arrayNombres,3,"JUAN2\n");
    printf("%d",indiceRepetido);*/

    //printf("%d",indiceVacio);

   // printArray(arrayNombres,3);
    //primero establecer todo los valores del array con \0
    return 0;
}





