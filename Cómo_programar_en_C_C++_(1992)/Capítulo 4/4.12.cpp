/*
	Author: Rolando Docampo Fernández
	Place: Casa María Caridad
	Date: 19/08/19 10:48
	Description: 4.12 Escriba un programa que calcule e imprima la suma de los 
	enteros pares del 2 al 30.
*/
#include <stdio.h>
#include <stdlib.h>

main()
{
	int contador, suma = 0;
	
	for(contador = 2; contador <= 30; contador += 2)
		suma += contador;
		
	printf("La suma de los enteros pares del 2 al 30 es: %d\n", suma);
	
   system("PAUSE");
   return 0;
}
