#include "operaciones.h"

/** \brief ingreso 2 enteros y realiza la funcion
 *
 * \param entero a
 * \param  entero b
 * \return  entero
 *
 */

int mostrarMenu ()
{
    // DESARROLLO DEL MENU DE OPCIONES

    int opcion;
    printf("1- Calcular Suma \n \n");
    printf("2- Calcular Resta \n \n ");
    printf("3- Calcular multiplicacion \n \n");
    printf("4- Calcular division  \n\n ");
    printf("5- Calcular Factorial \n \n");
    printf("6- DESEA SALIR\n");
    printf(" Elija una opcion\n");
    fflush(stdin);
    scanf("%d", &opcion);

    return opcion;


}






int sumar(int a , int b)
{
    // DESARROLLO SUMA

   int resultado;

   resultado = a + b;

   return resultado;


}
int restar(int a , int b)
{
    // DESARROLLO RESTA

    int resultado;

    resultado = a-b;

    return resultado;


}

int multiplicar(int a , int b)
{

    //DESARROLLO MULTIPLICACION
    int resultado;

    resultado = a*b;
    return resultado;



}

float dividir(int a , int b)
{
   //DESARROLLO DIVISION
    float resultado;

    resultado = (float) a /b;

    return resultado;


}
int factorial1(int a)
{
  // DESARROLLO FACTORIAL
   int resultado;

    if (a == 0)
        {
             resultado = 1;
        }

    else
    {
        resultado = a* factorial1(a-1);
    }
    return resultado;
}
int factorial2(int b)
{
   // DESARROLLO FACTORIAL
   int resultado;

    if (b == 0)
        {
             resultado = 1;
        }

    else
    {
        resultado = b* factorial2(b-1);
    }
    return resultado;
}

