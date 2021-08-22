/*
	Author: Rolando Docampo Fernández
	Place: Casa Karenia
	Date: 16/11/19 15:38
	Description: 5.16. Escriba una función integerPower(base, exponent) que 
	devuelva el valor de base elevado al exponent. Por ejemplo 
	integerPower(3,4) = 3 * 3 * 3 * 3. Suponga que exponent es un entero 
	positivo, no cero, y base es un entero. La función integerPower deberá 
	utilizar for para controlar el cálculo. No utilice ninguna función 
	matemática de la biblioteca.
*/

#include <stdio.h>
#include <stdlib.h>

int integerPower(int, int);

main()
{
	int base, exponente;
	
	do
	{
		printf("Escriba el exponente (-1 para terminar): ");
		scanf("%d", &exponente);
		
		if(exponente > 0)
		{
			printf("Escriba la base: ");
			scanf("%d", &base);
			printf("%d^%d = %d\n", base, exponente, integerPower(base, exponente));
		}
	}while(exponente != -1);

   system("PAUSE");
   return 0;
}

int integerPower(int base, int exponente)
{
	int resultado = 1, i;
	
	for(i = exponente; i >= 1; i--)
		resultado *= base;
	
	return resultado;
}
