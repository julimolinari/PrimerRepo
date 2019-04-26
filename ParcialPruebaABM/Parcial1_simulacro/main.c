#include <stdio.h>
#include <stdlib.h>
#include "pantalla.h"
#include "funciones.h"
int main()
{
    int idPantalla = 1;
    Pantalla pantallas[4];
    pan_Init(pantallas,4);
    pan_Alta(pantallas,4,idPantalla);
    printf("Nombre : %s", pantallas[0].nombre);
    printf("ID : %d", pantallas[0].idPantalla);

    pan_baja(pantallas,4);


    return 0;
}
