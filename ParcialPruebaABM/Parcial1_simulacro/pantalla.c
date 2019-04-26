#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "pantalla.h"
#include "funciones.h"


int pan_Init (Pantalla lista[], int lenght)
{
    int retorno = -1;
    if (lista != NULL && lenght> 0)
    {
        int i;
        for (i=0; i < lenght; i++)
        {
            lista[i].isEmpty = 1;
        }
        retorno = 0;
    }
    return retorno;
}

int pan_BuscarVacio (Pantalla lista[], int length)
{
    int indice = -1;
    if (lista != NULL && length >0)
    {
        int i;
        for ( i = 0 ; i< length ; i++)
        {
            if (lista[i].isEmpty == 1)
            {
                indice = i;
                break;
            }
        }
    }
    return indice;
}


int pan_Alta(Pantalla lista[], int length, int* id)
{
    int retorno;
    Pantalla auxPantalla;
    if(lista != NULL && length > 0)
    {
        retorno = -1;
        int indice;
        indice = pan_BuscarVacio(lista,length);
        if(indice==-1)
        {
            printf("No hay mas lugar.");
        }
        else
        {

            printf("Ingrese Nombre: \n");
            fgets(auxPantalla.nombre,50,stdin);
            fflush(stdin);

            printf("Ingrese Direccion: \n");
            fgets(auxPantalla.direccion,256,stdin);
            fflush(stdin);

            printf("Ingrese Precio: \n");
            scanf("%d",&auxPantalla.precio);
            fflush(stdin);

            printf("Ingrese Tipo: \n");
            fgets(auxPantalla.tipo,5,stdin);
            fflush(stdin);


            lista[indice] = auxPantalla;
            lista[indice].idPantalla = id;
            lista[indice].isEmpty = 0;
            retorno = 0;

        }

    }
    return retorno;
}


int pan_baja(Pantalla lista[], int length)
{
    int retorno = -1;
    int id;
    if(lista !=NULL && length>0)
    {
        printf("Ingrese ID a eliminar: \n");
        scanf("%d",&id);
        int i;
        for ( i = 0 ; i< length ; i++)
        {
            if(lista[i].idPantalla == id)
            {
                lista[i].isEmpty = 1;
                retorno = 0;
                printf("Baja exito.");
                break;
            }else
            {
                printf("Ese ID no exite.");
            }
        }
        return retorno;

    }

}



