/*
	Author: Rolando Docampo Fern�ndez
	Place: INEL Santiago de Cuba
	Date: 19/07/19 09:35
	Description: 3.40 Escribe un programa que despliegue el siguiente patr�n.
		* * * * * * * *
		 * * * * * * * *
		* * * * * * * *
	 	 * * * * * * * *
		* * * * * * * *
		 * * * * * * * *
		* * * * * * * *
		 * * * * * * * *
	Su programa s�lo puede utilizar tres enunciados printf, y uno de la forma
		printf("* ");
	otro de la forma
		printf(" ");
	y uno de la forma
		printf("\n");
*/
#include <stdio.h>
#include <stdlib.h>

main()
{
	int filas = 0, columnas = 0;
	
	while(++filas <= 8)
	{
		if(filas % 2 == 0)
				printf(" ");
				
		while(++columnas <= 8)	
			printf("* ");
		
		columnas = 0;
		printf("\n");
	}

   system("PAUSE");
   return 0;
}
