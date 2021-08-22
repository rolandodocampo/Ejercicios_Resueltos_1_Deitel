/*
	Author: Rolando Docampo Fernández
	Place: INEL Santiago de Cuba
	Date: 18/07/19 09:20
	Description: 3.34 Modifique el programa que escribió en el ejercicio 3.33, de
	tal forma que imprima un cuadrado hueco. Por ejemplo, si su programa lee un
	tamaño 5, deberá imprimir.
		*****
		*	 *
		*	 *
		*	 *
		***** 
*/
#include <stdio.h>
#include <stdlib.h>

main()
{
	int lado, filas = 0, columnas = 0, validacion = 0;
	
	printf("Entre el valor del lado (1 - 20): ");
	scanf("%d", &lado);
	
	/* Inicio de la validación */
	if(lado < 1);
	else if(lado > 20);
	else
		validacion = 1;
	/* Fin de la validación */
	
	if(validacion == 1)
	{	/* Ciclo que dibuja el cuadrado */
		while(++filas <= lado)
		{
			while(++columnas <= lado)
			{
				if(filas == 1)
					printf("*");
				else if(filas == lado)
					printf("*");
				else if(columnas == lado)
					printf("*");
				else if(columnas == 1)
					printf("*");
				else 
					printf(" ");
			}
			
			columnas = 0;
			printf("\n");
		}
		/* Fin del ciclo que dibuja el cuadrado */
	}
	else
		printf("Valor fuera de rango\n");

   system("PAUSE");
   return 0;
}
