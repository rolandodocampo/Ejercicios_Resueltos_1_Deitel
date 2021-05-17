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

main()
{
	int contador, n, factorial = 1;
	
	printf("%-9s%s\n", "Numero", "Factorial");
	for(contador = 1; contador <= 5; contador++)
	{
		for(n = 1; n <= contador; n++)
			factorial *= n;
			
		printf("%-9d%-9d\n", contador, factorial);
		factorial = 1;
	}
	
   system("PAUSE");
   return 0;
}

