#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int getString ( char* msg,
                char* msgError,
                int minimo,
                int maximo,
                int reintentos,
                char* resultado)
{
    int retorno = -1;
    char bufferStr[4096];
    if(msg != NULL && msgError != NULL && minimo < maximo && reintentos>=0 && resultado != NULL)
    {

        do
        {
            printf("%s",msg);
            fgets(bufferStr,sizeof(bufferStr),stdin);
            bufferStr[strlen(bufferStr)-1] = '\0';
            if(strlen(bufferStr)>=minimo && strlen(bufferStr) <maximo)
            {
                strncpy(resultado,bufferStr,maximo);
                retorno = 0;
                break;
            }
            reintentos--;
            printf("%s",msgError);
        }while(reintentos>=0);
    }
    return retorno;
}

int getName (   char* msg,
                char* msgError,
                int minimo,
                int maximo,
                int reintentos,
                char* resultado)
{
    int retorno = -1;
    char bufferStr[4096];
    if(msg != NULL && msgError != NULL && minimo < maximo && reintentos>=0 && resultado != NULL)
    {
        if(!getString(msg,msgError,minimo,maximo,reintentos,bufferStr))
        {
            if(isValidName(bufferStr))
            {
                strncpy(resultado, bufferStr,maximo);
                retorno = 0;
            }
        }

    }
    return retorno;
}


int isValidName (char* cadena)
{
    int retorno = TRUE;
    int i;
    for( i=0 ; cadena[i] != '\0'  ; i++)
    {
        if((cadena[i] > 'Z' || cadena[i] < 'A') && (cadena[i] > 'z' || cadena[i] < 'a')  )
        {
            retorno = FALSE;
            break;
        }
    }
    return retorno;
}


int printArray(char arrayStr[][50], int limite)
{
    int i;
    for(i=0;i<limite;i++)
    {
        printf("%s", arrayStr[i]);
    }
    return 0;
}


int inicializarArray (char arrayStr[][50],int limite)
{
    int i;
    for(i=0;i<limite;i++)
    {
        strncpy(arrayStr[i],"\0",50);
    }
    return 0;

}


// que conteste el indice vacio

int encontrarVacio(char arrayStr[][50], int limite)
{
    int i;
    for(i=0;i<limite;i++)
    {
        if(strcmp(arrayStr[i],"\0") == 0)
        {
            return i;
            break;
        }
    }
    return -1;
}



//int repetidos? //puede devolver el indice de donde esta el  nombre que ya esta

int encontrarRepetido(char arrayStr[][50], int limite,char *repetido)
{
    int i;
    for(i=0;i<limite;i++)
    {
        if(strcmp(arrayStr[i],repetido) == 0)
        {
            return i;
            break;
        }
    }
    return -1;
}



//get name, ver que no exista(si existe dar mesje error) y donde lo puedo poner
int ingresarRegistro (char* msg,char* msgError,int minimo,int maximo,int reintentos,char arrayStr[][50])
{
        if(msg != NULL && msgError != NULL && minimo < maximo && reintentos>=0)
    {

        do
        {
            char buffer[50];
            getName(msg,msgError,minimo,maximo,reintentos, buffer);

            if(encontrarRepetido(arrayStr,15,buffer)== -1)
            {
                int indiceVacio;
                indiceVacio = encontrarVacio(arrayStr,15);
                strncpy(arrayStr[indiceVacio],buffer,50);
            }
            reintentos--;
            printf("%s",msgError);
        }while(reintentos>=0);
    }
    return 0;

}
//menu en switch- alta baja modi ver(generar biblioteca para este doc en particular controller)

//funcion alta(array y tamaño array)- 1 verificar si tengo lugar para guardar el dato y dsp getName,si esta todo bien lo doy de alta, 1 verifico que no existe
// si esta digo que ya existe, si no exite lo doy de alta en el lugar vacio del principio.

//modificacion - ver si hay algo qu modificar, pedir nombre, ver si esta en el array y pedir el nuevo nombre

//borras-primero ver si hay elementos- cual queres borrar? - lo busco, si esta lo borro, no :-el nombre no se encontrò

//ordenar- swap no se asigna con = . se comprara srtcmp, devuelve 0 -1 1 depende del tamaño (orden alfabetico)
