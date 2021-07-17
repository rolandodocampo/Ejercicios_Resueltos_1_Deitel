/* 
	Author: Rolando Docampo Fern�ndez
	Place: INEL Santiago de Cuba
	Date: 18/07/19 08:42
	Description: 3.33 Escriba un programa que lea el lado de un cuadrado y a 
	continuaci�n lo imprima en forma de asteriscos. Su programa deber� poder 
	funcionar para cuadrados de todos tama�os entre 1 y 20. Por ejemplo, si su
	programa lee un tama�o de 4, deber�a imprimir.
		****
		****
		****
		**** 
*/
#include <stdio.h>
#include <stdlib.h>

main()
{
	int lado, contador1 = 0, contador2 = 0, validacion = 0;
	
	printf("Entre el tamano de un lado (1 - 20): ");
	scanf("%d", &lado);
	
	if(lado >= 1)
	{
		if(lado <= 20)
			validacion = 1;
	}
	else if(lado <= 20)
	{
		if(lado >= 1)
			validacion = 1;
	}  
		 
	if(validacion != 0)
	{
		while(++contador1 <= lado)
			{
				while(++contador2 <= lado)
						printf("*");
			  
			contador2 = 0;
			printf("\n");
			}
	}
	else
		 printf("Valor incorrecto.\n");

   system("PAUSE");
   return 0;
}
