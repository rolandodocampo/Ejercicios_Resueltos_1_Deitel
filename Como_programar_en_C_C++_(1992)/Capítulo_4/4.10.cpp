/*
	Author: Rolando Docampo Fernández
	Place: Casa Karenia
	Date: 19/08/19 09:25
	Description: 4.10 Escriba un programa que calcule e imprima el promedio de 
	varios enteros. Suponga que el último valor leído mediante scanf es el 
	centinela 9999. Una secuencia típica de entrada pudiera ser:
			10  8  11  7  9  9999
	indicando que debe calcularse el promedio de todos los valores que preceden
	a 9999.
*/
#include <stdio.h>
#include <stdlib.h>

main()
{
	int valores, total = 0, contador = 0;
	
	printf("Entre los numeros, (9999 para terminar): ");
	scanf("%d", &valores);
	
	while(valores != 9999)
	{
		total += valores;
		++contador;
		scanf("%d", &valores);
	}
	
	printf("Valores entrados    Promedio\n");
	
	if(contador != 0)
	{
		printf("%-20d%-8.2f\n", contador, (float)total / contador);
	}
	else
		printf("Ningun valor introducido\n");

   system("PAUSE");
   return 0;
}
