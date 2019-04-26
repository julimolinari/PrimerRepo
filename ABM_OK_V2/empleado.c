#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "funciones_string.h"
#include "empleado.h"

int empleado_Inicializar(Empleado* empleados, int cantidad)
{
    int ret;
    int i;
    for (i=0; i<cantidad;i++)
    {
        empleados[i].isEmpty=1;
        ret=0;
    }

    return ret;
}

void empleado_mostrarArray(Empleado* empleados, int cantidad)
{
    int i;
    for (i=0; i<cantidad;i++)
    {
        if(empleados[i].isEmpty==0)
        {
            printf("posicion %d :estado %d\n", i, empleados[i].isEmpty);
            printf("posicion %d :nombre %s\n", i, empleados[i].nombre);
            printf("posicion %d :apellido %s\n", i, empleados[i].apellido);
        }

        //printf("Press 'Enter' to continue: ... ");
        //while ( getchar() != '\n');
    }

}

int empleado_buscarLibre(Empleado* empleados, int cantidad, int* devuelve)
{
    int ret;
    int i;
    for (i=0; i<cantidad;i++)
    {
        if (empleados[i].isEmpty==1)
        {
            *devuelve=i;
            ret=0;
            break;
        }

        ret=1;
    }

    return ret;
}

int empleado_Altaempleado(Empleado* empleados, int cantidad, int posLibre)
{
    int ret;
    if (getString(empleados[posLibre].nombre,"ingrese un nombre: ","error, vuelva a ingresar\n\n",2,20,2)==0)
    {
        if (getString(empleados[posLibre].apellido,"Ingrese el apellido:","error, vuelva a intentar\n\n",2,20,2)==0)
        {
            empleados[posLibre].isEmpty=0;
            ret=0;
        }
        else
        {
            ret=1;
        }
    }
    return ret;
}

int empleado_buscarEnArray (Empleado* empleados, int cantidad, int* empleadoEncontrado)
{
    int ret=1;
    Empleado auxEmpleados;

    if (getString(auxEmpleados.nombre,"ingrese el nombre del empleado que quiera eliminar: ","Vuelva a ingresar",2,20,3)==0)
    {
        //auxEmpleados.nombre=tolower(auxEmpleados.nombre);
        ret=-1;
        int i;
        for(i=0;i<cantidad;i++)
        {
            //empleados[i].nombre=tolower(empleados[i].nombre);
            if (strcmp(empleados[i].nombre, auxEmpleados.nombre)==0)
            {
                ret=0;
                *empleadoEncontrado=i;
                break;
            }
        }
    }
    return ret;
}

int empleado_baja(Empleado* empleados, int cantidad)
{

    int posEmpleado;
    switch (empleado_buscarEnArray(empleados, cantidad,&posEmpleado))
    {
    case 0:
        if (empleados[posEmpleado].isEmpty==0)
        {
            printf("hubo coincidencia\n\n");
            empleados[posEmpleado].isEmpty=1;
            printf("El empleado borrado es: %s\n\n",empleados[posEmpleado].nombre);

        }
        break;
    case 1:
        printf("no se encontro el nombre y no entro al if");
        break;

    default:
        printf("ingreso al if pero no encontro el nombre");
        break;
    }
    return 1;
}

