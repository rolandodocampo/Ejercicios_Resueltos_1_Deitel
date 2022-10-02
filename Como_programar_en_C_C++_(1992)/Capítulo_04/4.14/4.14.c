/*
	Author: Rolando Docampo Fernández
	Place: Casa María Caridad
	Date: 19/08/19 11:02
	Description: 4.14 La función factorial se utiliza con frecuencia en problemas
	de probabilidades. El factorial de un entero positivo n (escrito n! y dicho
	como "factorial de n") es igual al producto de los enteros positivos del 1
	hasta el n. Escriba un programa que evalúe los factoriles de los enteros del
	1 al 5. Imprima el resultado en forma tabular. ¿Que podría impedirle que se
	calculara el factorial de 20?
*/
#include <stdio.h>
#include <stdlib.h>

main() /*Factorial de n!*/
{
	char cont, n, fact = 1; /*n = {1, 2, 3, 4, 5}*/
	
	printf("%6s%16s\n", "Numero", "Factorial");
	for(n = 1; n <= 5; n++) /*Envia los numeros n del 1 al 5*/
	{
		for(cont = 1, fact = 1; cont <= n; cont++) /*Calcula el factorial*/
			fact *= cont;
		
		printf("%6d%16d\n", n, fact);
	}
	
   system("PAUSE");
   return 0;
}
