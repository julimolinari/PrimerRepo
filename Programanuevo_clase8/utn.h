#define TRUE 1
#define FALSE 0

int getString ( char* msg,
                char* msgError,
                int minimo,
                int maximo,
                int reintentos,
                char* resultado);
//-------------------------------------

int getName (   char* msg,
                char* msgError,
                int minimo,
                int maximo,
                int reintentos,
                char* resultado);


int isValidName (char* cadena);

//-------------------------------------

int printArray(char arrayStr[][50], int limite);


int inicializarArray (char arrayStr[][50],int limite);


int encontrarVacio(char arrayStr[][50], int limite);


int encontrarRepetido(char arrayStr[][50], int limite,char *repetido);

int ingresarRegistro (char* msg,char* msgError,int minimo,int maximo,int reintentos,char arrayStr[][50]);
