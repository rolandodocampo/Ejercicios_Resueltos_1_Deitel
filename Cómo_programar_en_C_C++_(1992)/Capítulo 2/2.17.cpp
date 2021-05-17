/*
	Author: Rolando Docampo Fernández
	Place: INEL Santiago de Cuba
	Date: 11/07/19 09:10
	Description: 2.17 Escriba un programa que imprima los números de 1 a 4 en un
	mismo renglón. Escriba el programa utilizando los siguientes métodos:
		a) Utilizando un enunciado printf sin especificadores de conversión.
		b) Utilizando un enunciado printf con cuatro especificadores de 
			conversión.
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
