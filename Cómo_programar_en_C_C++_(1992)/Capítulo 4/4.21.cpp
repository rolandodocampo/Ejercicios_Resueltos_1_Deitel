/*
	Author: Rolando Docampo Fern�ndez
	Place: Casa de Karenia
	Date: 21/08/19 20:42
	Description: 4.21 Vuelva a escribir el programa de la figura 4.2, de tal 
	forma que la inicializaci�n de la variable counter sea hecha en la 
	declaraci�n, en vez de la estructura for.
*/
#include <stdio.h>
#include <stdlib.h>

main()
{
	int counter = 1;
	
	for(; counter <= 10; counter++)
		printf("%d\n", counter);

   system("PAUSE");
   return 0;
}

