/*
	Author: Rolando Docampo Fernández
	Place: Casa de Karenia
	Date: 20/08/19 08:00
	Description: 4.16 Escriba un programa que imprima los siguientes patrones 
	por separado, uno debajo del siguiente. Utilice ciclos for para generar los 
	patrones. Todos los asteriscos (*), deberán ser impresos por un solo 
	enunciado printf de la forma printf("*"); (esto hace que los asteriscos se 
	impriman uno al lado del otro). Sugerencia: los últimos dos patrones 
	requieren que cada línea empiece con un número correcto de espacios en 
	blanco.
			(A)				(B)				(C)				(D)
			*					**********		**********					*
			**					*********		 *********				  **
			***				********			  ********				 ***
			****				*******			   *******				****
			*****				******				 ******			  *****
			******			*****					  *****			 ******
			*******			****						****			*******
			********			***						 ***		  ********
			*********		**							  **		 *********
			**********		*								*		**********
*/
#include <stdio.h>
#include <stdlib.h>

main()		/* A = 65; B = 66 ... */
{
	short i, fila, columna, patron, espacios;
	
	for(i = 1, patron = 65; i <= 4; patron++, i++)
	{
		printf("(%c)\n", patron);
		
		switch(patron)
		{
			case 'A':
				for(fila = 1; fila <= 10; fila++)
				{
					for(columna = 1; columna <= fila; columna++)
						printf("*");
					printf("\n");
				}
				break;
				
			case 'B':
				for(fila = 10; fila >= 1; fila--)
				{
					for(columna = 1; columna <= fila; columna++)
						printf("*");
					printf("\n");
				}
				break;
				
			case 'C':
				for(fila = 10; fila >= 1; fila--)
				{
					for(espacios = 1; espacios <= -1 * (fila - 10); espacios++)
						printf(" ");
					
					for(columna = 1; columna <= fila; columna++)
						printf("*");
					printf("\n");	
				}
				break;
			
			case 'D':
				for(fila = 1; fila <= 10; fila++)
				{
					for(espacios = 1; espacios <= -1 * (fila - 10); espacios++)
						printf(" ");
					
					for(columna = 1; columna <= fila; columna++)
						printf("*");
					printf("\n");	
				}
				break;
		}
	}
	
   system("PAUSE");
   return 0;
}
