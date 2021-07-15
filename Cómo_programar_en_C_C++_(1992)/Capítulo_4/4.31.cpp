/*
	Author: Rolando Docampo Fernández
	Place: Casa de Karenia
	Date: 31/08/19 09:55
	Description: 4.31 Escriba una programa que imprima la forma en diamante 
	siguiente. Puede usted utilizar enunciados printf que impriman ya sea un 
	asterisco (*), o un espacio en blanco. Máximice su utlización de repeticiones
	(utilizando estructuras for anidadas), y minimice el número de enunciados 
	printf.
						*
					  ***
					 *****
					*******
				  *********
				   *******
				    *****
				     ***
				      *
*/
#include <stdio.h>
#include <stdlib.h>

main()
{
	int fila, total = 9, inAste = -1, finAste;
	int asteriscos, inEsp, finEsp, espacios;
	
	for(fila = 1; fila <= total; fila++)
	{
		if(fila <= 5)
		{
			inEsp = ((total - 1) / 2) + 1 - fila;
			finEsp = 0;	
		}
		else
		{
			inEsp = fila - 6;
			finEsp = -1;
		}
		
		if(fila <= 5)
		{
			inAste += 2;
			finAste = 0;
		}
		else
		{
			inAste -= 2;
			finAste = 0;
		}
		
		for(espacios = inEsp; espacios > finEsp; espacios--)
			printf(" ");
		
		for(asteriscos = inAste; asteriscos > finAste; asteriscos--)
			printf("*");
		
		printf("\n");
	}
	
   system("PAUSE");
   return 0;
}
