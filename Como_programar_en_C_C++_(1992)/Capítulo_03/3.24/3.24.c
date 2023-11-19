/*
	Author: Rolando Docampo Fern�ndez
	Place: INEL Santiago de Cuba
	Date: 17/07/19 13:08
	Description: 3.24 El proceso de encontrar el n�mero m�s grande (es decir, el
	m�ximo de un grupo de n�meros), es utilizado con frecuencia en aplicaciones 
	de computaci�n. Por ejemplo, un programa que determina el ganador de un 
	concurso de ventas, introducir�a el n�mero de unidades vendidas por cada 
	vendedor. El vendedor que hubiera vendido la mayor cantidad de unidades, 
	ganar�a el concurso. Escriba un programa primero en seudoc�digo, y a 
	continuaci�n en C, que introduzca una serie de 10 n�meros, y determine e 
	imprima el mayor de los mismos. Sugerencia: su programa deber�a de utilizar 
	tres variables como sigue:
	
		- counter: Un contador para contar hasta 10 (es decir, para controlar 
		cuantos n�meros han sido introducidos, y para determinar cu�ndo se han 
		procesado todos los 10 n�meros).
		- number: El n�mero actual introducido al programa.
		- largest: El n�mero m�s grande encontrado hasta ahora.
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
