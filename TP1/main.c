#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"

/** \brief la funcion principal
 *
 * \param pido los 2 numeros
 * \param realizo la llamada a la funcion de las bibliotecas  en el switch
 * \return
 *
 */




int main()


{
    int numero ;
    int numero2 ;
    int total;
    float totalDos;
    char salir = 's';




    do
    {
        printf("BIENVENIDO A LA CALCULADORA \n ");
        printf("INGRESE SUS NUMEROS Y HAGA OPERACIONES!!!\n \n ");


        printf(" ingrese el primer numero:   ");
        fflush(stdin);
        scanf("%d", &numero);

        printf(" ingrese el segundo numero:   ");
        fflush(stdin);
        scanf("%d", &numero2);














       switch (mostrarMenu())
       {
    case 1:
        total = sumar(numero, numero2);
        printf("el resultado de la suma  %d + %d es: %d ", numero, numero2 , total);
        break;

    case 2:
        total = restar(numero, numero2);
        printf("el resultado de la resta %d - %d es: %d ", numero , numero2, total);
        break;

    case 3: total = multiplicar(numero , numero2);
    printf("el resultado de la multiplicacion %d * %d es: %d  ", numero , numero2, total);
    break;

    case 4: totalDos = dividir(numero, numero2);
      printf("el resultado de la divison %d / %d es: %.2f ", numero, numero2 , totalDos);
      break;

    case 5:


            total = factorial1(numero);
            printf("\nEl resultado del factorial  !%d es : %d",numero,  total );

            total = factorial2(numero2);
            printf("\nEl resultado del factorial  !%d es : %d",numero2,  total );
            break;

     case 6:
        salir = 'n';
        printf("usted salio ");
        break;

      default : printf("opcion invalida");



       }
       system("pause");
       system("cls");


    }while (salir != 'n');



return 0;


}


