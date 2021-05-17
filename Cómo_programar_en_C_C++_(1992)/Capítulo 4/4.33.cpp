/*
	Author: Rolando Docampo Fernández
	Place: Casa de Karenia
	Date: 31/08/19 12:15
	Description: 4.33 Si estas familiarizado con los números romanos, escriba un
	programa que imprima una tabla de todos los equivalentes de números romanos
	con números decimales en el rango del 1 al 100.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	int decimal, temporal, potencia, resto;
	int temp2, resta;
	
	printf("Decimal\t\tRomano\n");
	for(decimal = 1; decimal <= 100; decimal++)
	{
		printf("%d\t\t", decimal);
		/* Inicio (Calcular potencia)*/
		temporal = decimal;
		for(potencia = 0; temporal != 0; potencia++)
			temporal /= 10;
		potencia -= 1;
		potencia = (int)pow(10, potencia);
		resto = decimal;
		/* Fin */
		
		do
		{
			temporal = resto / potencia;
			resto %= potencia;
			temp2 = temporal * potencia;
				
			if(temp2 <= 5)
			{
				resta = 5 - temp2;
				
				if(resta == 1)
				{
					printf("I");
					resta = 5;
				}
				else
					resta = temp2;
			}
			else if(temp2 > 5 && temp2 <= 8)
			{
				resta = temp2 - 5;
				printf("V");
			}
			else if(temp2 >= 9)
			{
				if((10 - temp2) == 1)
				{
					printf("I");
					resta = 10;
				}
				else if((50 - temp2) == 10)
				{
					printf("X");
					resta = 50;
				}
				else if(temp2 >= 60 && temp2 < 90)
				{
					printf("L");
					resta = temp2 - 50;
				}
				else if((100 - temp2) == 10)
				{
					printf("X");
					resta = 100;
				}
				else
					resta = temp2;
					
			}
			
			while(resta > 0)
			{
				switch(resta)
				{
					case 1:
						printf("I");
						break;
					case 2:
						printf("II");
						break;
					case 3:
						printf("III");
						break;
					case 5:
						printf("V");
						break;
					case 10:
						printf("X");
						break;
					case 50:
						printf("L");
						resta = 0;
						break;
					case 100:
						printf("C");
						resta = 0;
						break;
					default:
						printf("X");
						break;
				}
				
				resta -= 10;
			}
			
			potencia /= 10;
		}while(potencia != 0);
		printf("\n");
	}
	
   system("PAUSE");
   return 0;
}
