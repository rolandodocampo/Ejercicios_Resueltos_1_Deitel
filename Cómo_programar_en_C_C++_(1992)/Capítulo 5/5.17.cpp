/*
	Author: Rolando Docampo Fernández
	Place: Casa Karenia
	Date: 16/11/19 15:46
	Description: 5.17. Escriba una función múltiple que determine para un par de
	enteros, si el segundo de ellos es múltiple del primero. La función debe 
	tomar dos argumentos enteros y retornar 1 (verdadero) si el segundo es 
	múltiplo del primero, y cero (falso) de no ser así. Utilice esta función en
	un programa que introduzca una serie de pares de enteros.
*/

#include <stdio.h>
#include <stdlib.h>

short multiple(short, short);

main()
{
	short numero1, numero2;
	
	printf("Introduzca el primer numero (-1 para terminar): ");
	scanf("%hd", &numero1);
	
	while(numero1 != -1)
	{
		printf("Introduzca el segundo numero: ");
		scanf("%hd", &numero2);
		
		if(multiple(numero1, numero2))
			printf("%hd es multiplo del %hd\n", numero2, numero1);
		else
			printf("%hd no es multiplo del %hd\n", numero2, numero1);
			
		printf("Introduzca el primer numero (-1 para terminar): ");
		scanf("%hd", &numero1);
	}

   system("PAUSE");
   return 0;
}

short multiple(short x, short y)
{
	if(y % x == 0)
		return 1;
	else 
		return 0;
}
