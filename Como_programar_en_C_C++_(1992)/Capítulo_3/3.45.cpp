/*
	Author: Rolando Docampo Fernández
	Place: INEL Santiago de Cuba
	Date: 19/07/19 14:26
	Description: 3.45 Escriba un programa que lea tres enteros no ceros y que 
	determine e imprima si pueden ser los lados de un triángulo rectángulo.  
*/
#include <stdio.h>
#include <stdlib.h>

main()
{
	int lado1, lado2, lado3, evaluacion = 0;
	
	printf("Entre el valor del lado 1: ");
	scanf("%d", &lado1);
	printf("Entre el valor del lado 2: ");
	scanf("%d", &lado2);
	printf("Entre el valor del lado 3: ");
	scanf("%d", &lado3);
	
	if(lado1 == 0)
		printf("Valor erroneo.\n");
	else if(lado2 == 0)
		printf("Valor erroneo.\n");
	else if(lado3 == 0)
		printf("Valor erroneo.\n");
	else
	{
		if(lado1 * lado1 == lado2 * lado2 + lado3 * lado3)
			++evaluacion;
		if(lado2 * lado2 == lado1 * lado1 + lado3 * lado3)
			++evaluacion;
		if(lado3 * lado3 == lado1 * lado1 + lado2 * lado2)
			++evaluacion;	
	}
	
	evaluacion != 0 ? printf("Es un triangulo rectangulo.\n") : 
			printf("No es un triangulo rectangulo.\n");

   system("PAUSE");
   return 0;
}
