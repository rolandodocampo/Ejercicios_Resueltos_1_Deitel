/*
	Author:  Rolando Docampo Fernández
	Place: Casa de Karenia
	Date: 08/09/19 10:59
	Description: 4.39 Describa en general como eliminaría cualquier enunciado
	continue de un ciclo de un programa y remplazar dicho enunciado con algún 
	equivalente estructurado. Use las técnicas que desarrollo aquí para eliminar
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
