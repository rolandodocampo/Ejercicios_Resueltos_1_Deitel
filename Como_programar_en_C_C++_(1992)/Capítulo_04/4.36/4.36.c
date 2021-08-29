/*
	Author: Rolando Docampo Fernández
	Place: INEL Santiago
	Date: 02/09/19 14:22
	Description: 4.36 Escriba un programa que introduzca el año en el rango 1994
	hasta 1999 y utilice una repetición de ciclo for para introducir un 
	calendario condensado e impreso de forma nítida. Tenga cuidado con los años 
	bisiestos.
*/
#include <stdio.h>
#include <stdlib.h>

main()
{
	int year, meses, dias, maxDia, diaSemana = 6;
	int diferencia, bisiesto = 1994, intro;
	
	printf("Introduzca un ano: ");
	scanf("%d", &year);
	
	if(year >= 1994 && year <= 1999)
	{
		diferencia = year - 1994;
		
		for(; diferencia > 0; diferencia--, bisiesto++)
		{
			for(meses = 1; meses <= 12; meses++)
			{	
				if(meses == 8)
					maxDia = 31;
				else if((meses == 2) && (bisiesto % 4 == 0))
					maxDia = 29; 			/*Año bisiesto*/
				else if(meses == 2)
					maxDia = 28;
				else if(meses % 2 == 0)
					maxDia = 30;
				else 
					maxDia = 31;
					
				for(dias = 1; dias <= maxDia; dias++, ++diaSemana)
				{
						if(diaSemana == 8)
							diaSemana = 1;
				}
				
				if(diaSemana == 8)
					diaSemana = 1;
			}
	}
	/*********************************************************/
	printf("--------------------------------------------------------------------------\n");
	printf("| %-6s | %-7s | %-10s | %-7s | %-8s | %-7s | %-7s |\n",
			 "LUNES", "MARTES", "MIERCOLES", "JUEVES", "VIERNES", "SABADO",
			 "DOMINGO");
	printf("--------------------------------------------------------------------------\n");
	/*********************************************************/
	for(intro = 1; intro < diaSemana; intro++)
	{
		switch(intro)
		{
			case 1:
				printf("%-10s", " ");
				break;
			case 2:
				printf("%-10s", " ");
				break;
			case 3:
				printf("%-13s", " ");
				break;
			case 4:
				printf("%-10s", " ");
				break;
			case 5:
				printf("%-11s", " ");
				break;
			case 6:
				printf("%-10s", " ");
				break;
		}
	}
	
	for(meses = 1; meses <= 12; meses++)
	{	
		if(meses == 8)
			maxDia = 31;
		else if((meses == 2) && (bisiesto % 4 == 0))
			maxDia = 29; 			/*Año bisiesto*/
		else if(meses == 2)
			maxDia = 28;
		else if(meses % 2 == 0)
			maxDia = 30;
		else 
			maxDia = 31;
					
		for(dias = 1; dias <= maxDia; dias++, ++diaSemana)
		{
			if(diaSemana == 8)
				diaSemana = 1;
				
			switch(diaSemana)
			{
				case 1:
					printf("| %3d%3s |", dias, " ");
					break;
				case 2:
					printf(" %4d%3s |", dias, " ");
					break;
				case 3:
					printf(" %5d%5s |", dias, " ");
					break;
				case 4:
					printf(" %4d%3s |", dias, " ");
					break;
				case 5:
					printf(" %4d%4s |", dias, " ");
					break;
				case 6:
					printf(" %4d%3s |", dias, " ");
					break;
				case 7:
					printf(" %4d%3s |\n", dias, " ");
					break;
			}	
		}
	}
	printf("\n");
	}
	else
		printf("Ano fuera de rango\n");

   system("PAUSE");
   return 0;
}
