/*
	Author: Rolando Docampo Fernández
	Place: Casa Karenia
	Date: 16/11/19 15:50
	Description: 5.18. Escriba un programa que introduzca una serie de enteros y
	que los pase uno a la vez a la función even que utiliza el operador de 
	módulo, para determinar si el entero es par. La función deberá tomar un 
	argumento entero y regresar 1 si el entero es par, y 0 si no lo es.
*/

#include <stdio.h>
#include <stdlib.h>

short even(short);

main()
{
	short numero;
	
	do
	{
		printf("Entre un numero (-1 para terminar): ");
		scanf("%hd", &numero);
		
		if(numero == -1)
			break;
		else if(even(numero))
			printf("%hd es par\n", numero);
		else
			printf("%hd no es par\n", numero);
	}while(numero != -1);

   system("PAUSE");
   return 0;
}

short even(short valor)
{
	if((valor % 2) == 0)
		return 1;
	else 
		return 0;
}
