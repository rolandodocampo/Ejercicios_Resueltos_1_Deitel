/*
	Author: Rolando Docampo Fern�ndez
	Place: Casa Mar�a Caridad
	Date: 19/08/19 10:29
	Description: 4.11 Escriba un programa que localice el m�s peque�o de varios
	enteros. Suponga que el primer valor le�do especifica el n�mero de valores 
	que restan.
*/
#include <stdio.h>
#include <stdlib.h>

main()
{
	int cantVal, valor, menor, contador = 2;
	
	printf("Cuantos valores son?: ");
	scanf("%d", &cantVal);
	
	if(cantVal > 0)
	{
		printf("Introduzca los valores: ");
		scanf("%d", &valor);
		menor = valor;
		
		do
		{
			scanf("%d", &valor);
			valor < menor ? menor = valor : 0;
		}while(++contador <= cantVal);
		
		printf("El menor valor es: %d\n", menor);
	}
	else if(cantVal < 0)
		printf("Cantidad incorrecta\n");
	else
	  printf("No introdujo ningun valor\n");
	
   system("PAUSE");
   return 0;
}
