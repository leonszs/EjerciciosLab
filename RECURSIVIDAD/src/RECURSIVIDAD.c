/*
 ============================================================================
 Name        : RECURSIVIDAD.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int CalcularFactorial (int );


int main(void) {

	int factorial;
	setbuf(stdout, NULL);
	factorial = CalcularFactorial (3);

	printf ("el factorial es: %d", factorial);



	return EXIT_SUCCESS;
}

int CalcularFactorial (int numero)
{
	int resultado= 1;

	if (numero == 0)
	{
		resultado = 1;
	}
	else
	{
		resultado = numero * CalcularFactorial (numero - 1);
	}

	return resultado;

}
