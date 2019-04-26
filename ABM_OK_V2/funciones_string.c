#include <stdio.h>
//#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "funciones_string.h"


int buscarLibre (char lista[][56], int* pIndex, int cantidadPos)
{
    int i;
    int ret=-1;
    for(i=0; i<cantidadPos;i++)
    {
        printf("%s\n",lista[i]);
        if(lista[i][0]=='\0')
        {
            *pIndex =i;
            ret=0;
            break;
        }
    }
    return ret;
}

int getString(char *pResult, char *pMsg, char *pMsgError, int min, int max, int intentos)
{
    int ret=-1;
    char arrayAuxiliar[20];
    while(intentos>0)
    {
        printf(pMsg);
        //fflush( stdin ); //LIMPIA BUFFER WINDOWS
        __fpurge(stdin); //LIMPIA BUFFER LINUX
        fgets(arrayAuxiliar,sizeof(arrayAuxiliar),stdin);
        arrayAuxiliar[strlen(arrayAuxiliar)-1] = '\0';
        if( pResult != NULL && strlen(arrayAuxiliar) >= min && strlen(arrayAuxiliar) <= max && validarLetra(arrayAuxiliar)==0)
        {
            strncpy(pResult,arrayAuxiliar,max);

            ret=0;
            break;
        }
        else
        {
            printf(pMsgError);
        }
        intentos--;
    }
    return ret;
}

int validarLetra (char letras[])
{
    int ret=0;
    int i=0;
    int CantidadLetras;
    CantidadLetras=strlen(letras);
    while (i<CantidadLetras && ret==0)
    {
        if (isalpha(letras[i])!=0)
        {
            i++;
        }
        else
        {
            ret=1;
        }
    }
    return ret;
}
