#ifndef UTN_H_INCLUDED
#define UTN_H_INCLUDED



#endif // UTN_H_INCLUDED
int getString(char* msg, char* msgError, int min, int max, int* reintentos, char* resultado);
/*************************
    getString
    getName
    getNumero
    getNumeroConDecimales

**************************/

/** \brief Solicita el ingreso de un string y valida su tama�o
* \param msg char* Mensaje a mostrar
* \param msgError char* Mensaje de error a mostrar
* \param min intTama�o minimo del string
* \param max intTama�o minimo del string Tama�o= elementos+1(\0)
* \param reintentos int* Puntero a la cantidad de reintentos para ingresar el string solicitado
* \param resultado char* Puntero a la variable donde se almacena el string ingresado
* \return int Return (-1) si Error [tama�o invalido o NULL pointer] - (0) si Ok
*/

int getName(char* msg,char* msgError,int min,int max,int reintentos,char* resultado);
/** \brief Solicita el ingreso de un string y valida su tama�o y su contenido (solo letras)
* \param msg char* Mensaje a mostrar al solicitar el string
* \param msgError char* Mensaje de error a mostrar
* \param min intTama�o minimo del string
* \param max intTama�o maximo del string Tama�o= elementos+1(\0)
* \param reintentos int* Puntero a la cantidad de reintentos para ingresar el string solicitado
* \param resultado char* Puntero a la variable donde se almacena el string ingresado
* \return int Return (-1) si Error [tama�o o contenido invalido o NULL pointer] - (0) si Ok
*/
int isValidName(char* stringRecibido);


int getUnsignedInt(char* msg,char* msgError,int minSize,int maxSize,int reintentos,int* input);
/** \brief Solicita el ingreso de un numero y valida su tama�o y su contenido (numero sin signo)
* \param msg char* Mensaje a mostrar al solicitar el string
* \param msgError char* Mensaje de error a mostrar
* \param minSize int Tama�o minimo del string
* \param maxSize int Tama�o maximo del string Tama�o= elementos+1(\0)
* \param reintentos int* Puntero a la cantidad de reintentos para ingresar el string solicitado
* \param input int* Puntero a la variable donde se almacena el string ingresado
* \return int Return (-1) si Error [tama�o o contenido invalido o NULL pointer] - (0) si Ok
*/
int isValidNumber(char* stringRecibido);

int getFloat(char* msg, char* msgError, int minSize, int maxSize, int reintentos, float* input);
/** \brief Solicita el ingreso de un numero y valida su tama�o y su contenido (numero con decimales)
* \param msg char* Mensaje a mostrar al solicitar el string
* \param msgError char* Mensaje de error a mostrar
* \param minSize int Tama�o minimo del string
* \param maxSize int Tama�o maximo del string Tama�o= elementos+1(\0)
* \param reintentos int* Puntero a la cantidad de reintentos para ingresar el string solicitado
* \param input float* Puntero a la variable donde se almacena el string ingresado
* \return int Return (-1) si Error [tama�o o contenido invalido o NULL pointer] - (0) si Ok
*/

int isValidFloatNumber(char* stringRecibido);
