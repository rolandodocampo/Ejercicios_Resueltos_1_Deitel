/*
	Author:  Rolando Docampo Fern�ndez
	Place: Casa de Karenia
	Date: 08/09/19 10:59
	Description: 4.39 Describa en general como eliminar�a cualquier enunciado
	continue de un ciclo de un programa y remplazar dicho enunciado con alg�n 
	equivalente estructurado. Use las t�cnicas que desarrollo aqu� para eliminar
	el enunciado continue del programa de la figura 4.12.
*/
#include <stdio.h>
#include <stdlib.h>

main()
{
	int x;
	
	for(x = 1; x <= 10; x++)
	{
		
		if(x != 5)
			printf("%d ", x);
		
	}
	
	printf("\nUse continue to skip priting the value 5\n");

   system("PAUSE");
   return 0;
}
