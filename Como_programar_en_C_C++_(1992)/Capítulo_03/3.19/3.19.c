/*
	Author: Rolando Docampo Fernández
	Place: INEL Santiago de Cuba 
	Date: 17/07/19 10:42
	Description: 3.19 Una empresa química paga a su personal de ventas en base a
	comisiones. El personal de ventas recibe $200 por semana más el 9% de las 
	ventas brutas de esa semana. Por ejemplo, una persona de ventas que vende 
	$5000 de productos químicos en una semana, recibe $200 más el 9% de $5000, o 
	sea un total de $650. Desarrolle un programa en C que introduzca las ventas 
	brutas de cada vendedor correspondiente a la última semana, y calcule y 
	despliegue las ganancias de dicho vendedor. Procese las cifras vendedor por 
	vendedor.
		Enter sales in dollars (-1 to end): 5000.00
		Salary is: $650.00
		
		Enter sales in dollars (-1 to end): 1234.56
		Salary is: $311.11
		
		Enter sales in dollars (-1 to end): 1088.89
		Salary is: $298.00
		
		Enter sales in dollars (-1 to end): -1
*/
#include <stdio.h>
#include <stdlib.h>

main()
{
	float ventas;
	
	printf("Introduzca las ventas brutas (-1 para salir): ");
	scanf("%f", &ventas);
	
	while(ventas != -1)
	{
		printf("Su salario es: $%.2f\n\n", 200 + ventas * 0.09);
		
		printf("Introduzca las ventas brutas (-1 para salir): ");
		scanf("%f", &ventas);
	}

   system("PAUSE");
   return 0;
}
