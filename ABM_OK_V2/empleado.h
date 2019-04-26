#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED

typedef struct
{
    char nombre[20];
    char apellido[20];
    int isEmpty; // lleno=0 ; vacio=1
    int idEmpleado; //autoincremental
} Empleado;

int empleado_Inicializar(Empleado* empleados, int cantidad);
void empleado_mostrarArray(Empleado* empleados, int cantidad);
int empleado_buscarLibre(Empleado* empleados, int cantidad, int* devuelve);
int empleado_Altaempleado(Empleado* empleados, int cantidad, int posLibre);
int empleado_buscarEnArray (Empleado* empleados, int cantidad, int* empleadoEncontrado);
int empleado_baja(Empleado* empleados, int cantidad);


#endif // EMPLEADO_H_INCLUDED
