#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //tamaño del array, reservo ese espacio /0 dice donde termina la info util
    //INICIALIZADO
    char nombre[7]={'X','X','X','X','\0'};//igual al de abajo
    char nombre2[7]="HOLA";

    //le paso destino.origen y la cant de elemntos que permito copiar en el destino(dest, org, tamaño del dest)
    //que tamaño tiene reservado en memoria ese array - sizeof

    strncpy(nombre,nombre2,sizeof(nombre));//copia archivo
    printf("\n%s",nombre);
    //como tomar los datos?-lee un string desde un archivo stdi - le digo el file
    fgets(nombre,sizeof(nombre),stdin);
    printf("\n%s",nombre);

    // determina cuantos caracters tiene dentro
    strlen();

    //le paso dos strings me dice cual es mas grande o iguales
    strcmp();


    //app pide nombre, guardo en buffer. verificar la cant de caracteres que tiene y que no tenga algun caracter indeseablerecorrer hasya al\0 o hasta la longitud max.. y copiar en la variable de destino

    return 0;
}
