/*
	Author: Rolando Docampo Fernández
	Place: INEL Santiago de Cuba
	Date: 18/07/19 07:59
	Description: 3.32 (Otro problema del else colgante). Modifique el código que 
	sigue para producir la salida mostrada. Utilice las técnicas apropiadas de 
	sangrías. No puede hacer ningún cambio a excepción de inserción de llaves. En
	un programa C el compilador ignorará la sangría. Hemos eliminado las sangrías
	del código siguiente para hacer más atractivo el problema. Nota: pudiera ser
	posible que no se requiera de ninguna modificación.
		if(y == 8)
		if(x == 5)
		printf("@@@@@\n");
		else
		printf("#####\n");
		printf("$$$$$\n");
		printf("&&&&&\n");
	
	a) Suponiendo x = 5 y y = 8, se produce la siguiente salida.
		@@@@@
		$$$$$
		&&&&&
	b) Suponiendo x = 5 y y = 8, se produce la siguiente salida.
		@@@@@
	c) Suponiendo x = 5 y y = 8, se produce la siguiente salida.
		@@@@@
		&&&&&
	d) Suponiendo x = 5 y y = 7, se produce la siguiente salida. Nota: los tres 
	enunciados printf últimos son todos partes de un enunciado compuesto.
		#####
		$$$$$
		&&&&&
*/
#include <stdio.h>
#include <stdlib.h>

main()
{
	int x, y;
	
	printf("a)"); 
	x = 5;
	y = 8;
	
	if(y == 8)
		if(x == 5)
			printf("@@@@@\n"); 
		else
			printf("  #####\n");
			
	printf("  $$$$$\n"); 
	printf("  &&&&&\n");  
	printf("--------\n");
	
	printf("b)"); 
	x = 5;
	y = 8;
	
	if(y == 8)
		if(x == 5)
			printf("@@@@@\n"); 
		else
		{
			printf("  #####\n");
			printf("  $$$$$\n"); 
			printf("  &&&&&\n");  
		}
	
	printf("--------\n");
	
	printf("c)"); 
	x = 5;
	y = 8;
	
	if(y == 8)
		if(x == 5)
			printf("@@@@@\n"); 
		else
		{
			printf("  #####\n");
			printf("  $$$$$\n"); 
		}
		
	printf("  &&&&&\n");  
	printf("--------\n");
	
	printf("d)"); 
	x = 5;
	y = 7;
	
	if(y == 8)
	{
		if(x == 5)
			printf("@@@@@\n"); 
	}
	else
	{
		printf("#####\n");
		printf("  $$$$$\n"); 
		printf("  &&&&&\n"); 
	}
	printf("--------\n");
	
   system("PAUSE");
   return 0;
}
