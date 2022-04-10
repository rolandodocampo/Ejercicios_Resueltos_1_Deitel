/*
	Author: Rolando Docampo Fern�ndez
	Place: Casa Karenia
	Date: 19/08/19 08:57
	Description: 4.9 Escriba un programa que sume una secuencia de enteros. 
	Suponga que el primer entero le�do con scanf especifica el n�mero de valores
	que faltan de introducir. Su programa deber� leer un valor cada vez que 
	scanf sea ejecutado. Una secuencia de entrada t�pica pudiera ser:
				5  100  200  300  400  500
	donde 5 indica que los valores subsiguientes deber�n de ser sumados.
*/
#include <stdio.h>
#include <stdlib.h>

main()
{
	int cantVal, total = 0, valor, memoria; 
	
	printf("Introduzca los valores: ");
	scanf("%d", &cantVal);
	memoria = cantVal;
	
	while(cantVal >= 1)
	{
		scanf("%d", &valor);
		total += valor;
		--cantVal;
	}
	
	printf("****************************\n");
	printf("%-21s%s\n", "Cantidad de Valores", "Total");
	total != 0 ? printf("%-21d%-5d\n", memoria, total) : printf("Sin valores.\n");
	printf("****************************\n");
	
   system("PAUSE");
   return 0;
}
