/*
	Author: Rolando Docampo Fernández
	Place: INEL Santiago de Cuba
	Date: 15/07/19 07:53
	Description: 2.26 Escriba un programa que lea dos enteros y que determine e 
	imprima si el primero es un múltiplo del segundo . (Sugerencia: utilice el 
	operador de módulo).
*/

#include <stdio.h>
#include <stdlib.h>

main()
{
	int num1, num2;
	
	printf("Entre dos enteros: ");
	scanf("%d%d", &num1, &num2);
	
	if(num1 % num2 == 0)
		printf("%d es multiplo de %d.\n", num1, num2);
	
	if(num1 % num2 != 0)
		printf("%d no es multiplo de %d.\n", num1, num2);
		
	system("PAUSE");
	return 0;
}
