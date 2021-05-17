/*
	Author: Rolando Docampo Fernández
	Place: Casa Karenia
	Date: 19/08/19 08:57
	Description: 4.9 Escriba un programa que sume una secuencia de enteros. 
	Suponga que el primer entero leído con scanf especifica el número de valores
	que faltan de introducir. Su programa deberá leer un valor cada vez que 
	scanf sea ejecutado. Una secuencia de entrada típica pudiera ser:
				5  100  200  300  400  500
	donde 5 indica que los valores subsiguientes deberán de ser sumados.
*/
#include <stdio.h>
#include <stdlib.h>

main()
{
	int cantVal, contador, total = 0, valor; 
	
	printf("Introduzca los valores: ");
	scanf("%d", &cantVal);
	
	for(contador = 1; contador <= cantVal; contador++)
	{
		scanf("%d", &valor);
		total += valor;
	}
	
	printf("%-21s%s\n", "Cantidad de Valores", "Total");
	printf("%-21d%-5d\n", cantVal, total);
	
   system("PAUSE");
   return 0;
}
