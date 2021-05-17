/* 
	Author: Rolando Docampo Fernández
	Place: Casa María Caridad
	Date: 19/08/19 10:56
	Description: 4.13 Escriba un programa que calcule e imprima el producto de 
	los enteros impares del 1 al 15.
*/
#include <stdio.h>
#include <stdlib.h>

main()
{
	int contador, producto = 1;
	
	for(contador = 1; contador <= 15; contador += 2)
		producto *= contador;
		
	printf("El producto es: %d\n", producto);
	
   system("PAUSE");
   return 0;
}

