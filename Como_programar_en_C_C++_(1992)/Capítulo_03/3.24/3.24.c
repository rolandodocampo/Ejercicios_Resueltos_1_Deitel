/*
	Author: Rolando Docampo Fernández
	Place: INEL Santiago de Cuba
	Date: 17/07/19 13:08
	Description: 3.24 El proceso de encontrar el número más grande (es decir, el
	máximo de un grupo de números), es utilizado con frecuencia en aplicaciones 
	de computación. Por ejemplo, un programa que determina el ganador de un 
	concurso de ventas, introduciría el número de unidades vendidas por cada 
	vendedor. El vendedor que hubiera vendido la mayor cantidad de unidades, 
	ganaría el concurso. Escriba un programa primero en seudocódigo, y a 
	continuación en C, que introduzca una serie de 10 números, y determine e 
	imprima el mayor de los mismos. Sugerencia: su programa debería de utilizar 
	tres variables como sigue:
	
		- counter: Un contador para contar hasta 10 (es decir, para controlar 
		cuantos números han sido introducidos, y para determinar cuándo se han 
		procesado todos los 10 números).
		- number: El número actual introducido al programa.
		- largest: El número más grande encontrado hasta ahora.
*/
#include<stdio.h>
#include<stdlib.h>

main()
{
	int counter = 1, number, largest;
	
	printf("Entre el %d numero: ", counter);
	scanf("%d", &number);
	largest = number;
	
	while(++counter <= 10)
	{
		printf("Entre el %d numero: ", counter);
		scanf("%d", &number);
		
		if(number > largest)
			largest = number;
	}
	
	printf("El mayor es: %d.\n", largest);

   system("PAUSE");
   return 0;
}
