#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>

int validarChar(char ingresado[257],char *resultado[]);

int main()
{
    char nombre[257];
    char buffer[257];
    int cantCarac;
    int i;
    int flag = 0;
    printf("Ingrese su nombre: ");
    fgets(buffer,sizeof(buffer),stdin);

    //printf("\n%s",buffer);
    cantCarac = strlen(buffer) - 1;

    for(i=0; i < cantCarac ; i++)
    {
        if(buffer[i] < 123 && buffer[i] >= 97 || buffer[i] <= 90 && buffer[i]>= 65 )
        {

            continue;
        }else
        {
            printf("invalido");
            flag = -1;
            break;
        }
    }


        if(flag==0)
        {
            strncpy(nombre,buffer,sizeof(nombre));
            printf("%s",nombre);
        }


    return 0;
}

/*
int validarChar(char ingresado[257],char *resultado[])
{

    char buffer[sizeof(ingresado)];
    int cantCarac;
    int i;
    int flag = 0;
    buffer = ingresado;
    //printf("\n%s",buffer);
    cantCarac = strlen(buffer) - 1;

    for(i=0; i < cantCarac ; i++)
    {
        if(buffer[i] < 123 && buffer[i] >= 97 || buffer[i] <= 90 && buffer[i]>= 65 )
        {

            continue;
        }else
        {
            printf("invalido");
            flag = -1;
            break;
        }
    }


        if(flag==0)
        {
            strncpy(&resultado,buffer,sizeof(ingresado));
            printf("%s",resultado);
        }

}*/


