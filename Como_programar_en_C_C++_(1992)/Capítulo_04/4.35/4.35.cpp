/*
	Author: Rolando Docampo Fernández
	Place: INEL Santiago
	Date: 02/09/19 13:18
	Description: 4.35 Describa el proceso que utilizaría para remplazar el ciclo
	do/while con un ciclo equivalente while. Qué problema ocurre cuando usted 
	trata de remplazar el ciclo while con un ciclo equivalente do/while? Suponga 
	que se le ha dicho que debe eliminar un ciclo while y remplazarlo con un 
	do/while. Qué estructura de control adicional necesitaría utilizar, para 
	asegurarse que el programa resultante se comporta igual que el original?.
*/
#include <stdio.h>
#include <stdlib.h>

main()
{
	int i;
	
	printf("Escribir los numeros del 1 al 10 con un do/while\n");
	printf("Numero\n");
	
	i = 1;
	do
	{
		printf("%d\n", i);
	}while(++i <= 10);
	printf("-------------------------------\n");
	
	printf("Escribir los numeros del 1 al 10 sustituyendo do/while por un while\n");
	printf("Numero\n");
	
	i = 1;
	while(1)
	{
		printf("%d\n", i);
		
		if(i == 10)
		break;
		
		++i;
	}
	printf("-------------------------------\n");
	
	printf("Escribir los numeros del 1 al 10 sustituyendo while por un do/while\n");
	printf("Numero\n");
	
	i = 0;
	while(++i <= 10)
	{
		
		if(i <= 0 || i > 10)
		  break;
		  
		printf("%d\n", i);
	}
	printf("-------------------------------\n");

   system("PAUSE");
   return 0;
}
