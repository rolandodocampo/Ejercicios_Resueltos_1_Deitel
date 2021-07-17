/* 
	Author: Rolando Docampo Fern�ndez
	Place: INEL Santiago de Cuba
	Date: 11/07/19 09:21
	Description: 2.18 Escriba un programa que solicite al usuario que escriba dos
	enteros, tome los n�meros del usuario y a continuaci�n imprima el n�mero 
	mayor seguido por las palabras "is larger". Si los n�meros son iguales que 
	imprima el mensaje "These numbers are equal". Utilice solo la forma de una 
	selecci�n del enunciado if que aprendi� en este cap�tulo.
*/

#include <stdio.h>
#include <stdlib.h>

main()
{
	int num1, num2;
	
	printf("Introduzca dos enteros: ");
	scanf("%d%d", &num1, &num2);
	
	if(num1 == num2)
		printf("These numbers are equal\n");
		
	if(num1 > num2)
		printf("%d is larger\n", num1);
	
	if(num1 < num2)
		printf("%d is larger\n", num2);
		
	system("PAUSE");
	return 0;
}
