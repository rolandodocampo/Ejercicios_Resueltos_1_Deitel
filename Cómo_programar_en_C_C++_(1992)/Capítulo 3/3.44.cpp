/* 
	Author: Rolando Docampo Fernández
	Place: INEL Santiago de Cuba
	Date: 19/07/19 13:59
	Description: 3.44 Escriba un programa que lea tres valores float no cero, y
	que determine e imprima si pueden representar los lados de un triángulo. 
*/
#include <stdio.h>
#include <stdlib.h>

main()
{
	float val1, val2, val3, evaluacion = 0;
	
	printf("Entre el valor del lado 1: ");
	scanf("%f", &val1);
	printf("Entre el valor del lado 2: ");
	scanf("%f", &val2);
	printf("Entre el valor del lado 3: ");
	scanf("%f", &val3);
	
	if(val1 == 0)
		printf("Valor erroneo.\n");
	else if(val2 == 0)
		printf("Valor erroneo.\n");
	else if(val3 == 0)
		printf("Valor erroneo.\n");
	else
	{		
		if(val1 + val2 > val3)
			++evaluacion;
		if(val2 + val3 > val1)
			++evaluacion;
		if(val1 + val3 > val2)
			++evaluacion;
	}
	
	if(evaluacion == 3)
		printf("Forman parte de un triangulo.\n");
	else if(evaluacion != 0)
		printf("No forman parte de un triangulo.\n");

   system("PAUSE");
   return 0;
}
