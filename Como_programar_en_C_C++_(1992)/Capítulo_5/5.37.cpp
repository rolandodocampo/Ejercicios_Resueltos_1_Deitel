/*
	Author: Rolando Docampo Fern�ndez
	Place: Casa de Karenia
	Date: 03/12/19 16:10
	Description: 5.37. Escriba una funci�n recursiva power(3,4) = 3 * 3 * 3 * 3.
	Suponga que el exponente es un entero mayor que o igual a 1. Sugerencia: el 
	paso de recursi�n deber� de utilizar la relaci�n
			base^exponente = base * base^exponente - 1
	y la condici�n de terminaci�n ocurrir� cuando exponente es igual a 1 porque
			base^1 = base.
*/
#include <stdio.h>
#include <stdlib.h>

int power(short, short);

main()
{
	short base, exponente;
	
	printf("Introduzca la base y el exponente: ");
	scanf("%hd%hd", &base, &exponente);
	printf("%hd a la potencia %hd = %d\n", base, exponente, power(base, exponente));

   system("PAUSE");
   return 0;
}

int power(short base, short exponente)
{
	if(exponente == 1)
		return base;
	
	return base * power(base, exponente - 1);
}
