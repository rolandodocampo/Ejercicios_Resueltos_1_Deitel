/*
	Author: Rolando Docampo Fern�ndez
	Place: INEL Santiago de Cuba
	Date: 11/07/19 09:10
	Description: 2.17 Escriba un programa que imprima los n�meros de 1 a 4 en un
	mismo rengl�n. Escriba el programa utilizando los siguientes m�todos:
		a) Utilizando un enunciado printf sin especificadores de conversi�n.
		b) Utilizando un enunciado printf con cuatro especificadores de 
			conversi�n.
		c) Utilizando cuatro enunciados printf.
*/

#include <stdio.h>
#include <stdlib.h>

main()
{
	/* a) */
	printf("1, 2, 3, 4\n");
	/* b) */
	printf("%d, %d, %d, %d\n", 1, 2, 3, 4);
	/* c) */
	printf("1, ");
	printf("2, ");
	printf("3, ");
	printf("4\n");
	
	system("PAUSE");
	return 0;
}
