/*
	Author: Rolando Docampo Fernández
	Place: Casa Karenia
	Date: 30/10/19 16:31
	Description: 5.9. Un estacionamiento p�blico carga $2.00 de estacionamiento 
	mínimo por las primeras tres horas. El estacionamiento carga $0.50 
	adicionales por cada hora o parte de la misma en exceso de tres horas. El 
	cargo máximo para cualquier periodo de 24 horas es $10.00. Suponga que no 
	existe ningún vehículo que se quede más de 24 horas a la vez. Escriba un 
	programa que calcule e imprima los cargos por estacionamiento para cada uno 
	de tres clientes que ayer estacionaron sus automóviles en este garaje. Deberá 
	de	introducir las horas de estacionamiento para cada uno de los clientes. Su 
	programa deberá imprimir los resultados en formato tabular nítido, y deberá 
	calcular e imprimir el total de los ingresos de ayer. El programa deberá 
	utilizar la función calculate-Charges para determinar los cargos de cada 
	cliente. Sus salidas deberán de aparecer en el formato siguiente:
		Car		Hours		Charge
		1			  1.5		  2.00
		2			  4.0		  2.50
		3			 24.0		 10.00
		TOTAL	    29.5		 14.50  	
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

extern float calculate_Charge(float);

main()
{
	auto float hours1 = 0.0, cargo1, hours2 = 0.0, cargo2;
	auto float hours3 = 0.0, cargo3, total = 0.0, horas_total;
	
	
	printf("Cliente 1:\n Horas estacionadas: ");
	scanf("%f", &hours1);
	printf("Cliente 2:\n Horas estacionadas: ");
	scanf("%f", &hours2);
	printf("Cliente 3:\n Horas estacionadas: ");
	scanf("%f", &hours3);
	
	horas_total = hours1 + hours2 + hours3;
	cargo1 = calculate_Charge(hours1);
	cargo2 = calculate_Charge(hours2);
	cargo3 = calculate_Charge(hours3);
	total = cargo1 + cargo2 + cargo3;
	
	printf("\n**********************\n");
	printf("Car\tHours\tCharge\n");
	printf("%-3d\t%5.1f\t%6.2f\n", 1, hours1, cargo1);
	printf("%-3d\t%5.1f\t%6.2f\n", 2, hours2, cargo2);
	printf("%-3d\t%5.1f\t%6.2f\n", 3, hours3, cargo3);
	printf("TOTAL\t%5.2f\t%6.2f\n", horas_total, total);
	printf("**********************\n");

   system("PAUSE");
   return 0;
}

extern float calculate_Charge(float horas)
{
	auto float charge = 0;
	
	if(horas > 0 && horas <= 3.00)
		charge = 2.00;
	if(horas == 24.00)
		charge = 10.00;
	else if(horas > 3.00 && horas < 24.00)
		charge = ceil(horas - 3) * 0.50 + 2;
	
	return charge;
}
