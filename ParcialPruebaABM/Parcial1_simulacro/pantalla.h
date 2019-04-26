
typedef struct
{
    int idPantalla;
    int isEmpty;
    char nombre[50];
    char direccion[256];
    int precio;
    char tipo[3];
} Pantalla;

int pan_Init (Pantalla lista[], int lenght);
int pan_BuscarVacio (Pantalla lista[], int length);
int pan_Alta(Pantalla lista[], int length, int* id);
