#include <stdio.h>
#include <stdlib.h>

int utn_getString(char *msg, char *msgError, int minimo,int maximo, int reintentos, char *resultado);

int utn_isValidNumber(char *str);//todas las de validacion devuelven entero y reciben string
int utn_getNumber(char *msg, char *msgError, int minimo,int maximo, int reintentos, int resultado);

int main()
{
    //Estructura: siempre tomamos todo con getString
    //Validaciones abstractas(devuelven V o F)


    return 0;
}


int utn_isValidNumber(char *str)
{
    return 1;
}


int utn_getString(char *msg, char *msgError, int minimo,int maximo, int reintentos, char *resultado)
{
    strncpy(resultado,"1234",5);
    return 0;
}


int utn_getNumber(char *msg, char *msgError, int minimo,int maximo, int reintentos, int resultado)
{
    int retorno = -1;
    char buffer[18];
    int bufferInt;
    if(msg != NULL && msgError != NULL)//falta validar
    {
        if(utn_getString(msg,msgError,1,16,reintentos,buffer)==0)
        {
            if(utn_isValidNumber(buffer))

                bufferInt = atoi(buffer);
                if(bufferInt >= minimo && bufferInt <= maximo)
                {
                    *resultado = bufferInt;
                    retorno = 0;
                }

                }else
                {

                }

        }
    }

    return retorno;
}
