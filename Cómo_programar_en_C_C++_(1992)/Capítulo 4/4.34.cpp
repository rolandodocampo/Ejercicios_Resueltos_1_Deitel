/*
	Author: Rolando Docampo Fernández
	Place: INEL Santiago
	Date: 02/09/19 11:24
	Description: 4.34 Escriba un programa que imprima una tabla de los 
	equivalentes binarios, octal y hexadecimal de los números decimales del 1 al 
	256. Si no esta familiarizado con estos sistemas numéricos, lea primero el 
	Apéndice E, si desea tratar de intentar hacer este ejercicio.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	int decimal, base, binario = 0, baseCopia, resto;
	
	printf("%s\t  |\t%s\t  |\t%s\t  |\t%s|\n", "Decimal", "Binario", "Octal", "Hexadecimal");
	printf("-----------------------------------------------------------|\n");
	for(decimal = 0; decimal <= 256; decimal++)
	{
		printf("%4d", decimal);
		/* Decimal-Binario */
		for(base = 0; pow(2, base) < decimal; base++) 
		{
			if(pow(2, base + 1) > decimal)
				break;
		}
		printf("\t  |\t");
		for(baseCopia = base, resto = decimal; baseCopia >= 0; baseCopia--)
		{
			printf("%d", resto / (int)pow(2, baseCopia));
			resto %= (int)pow(2, baseCopia);
		}
		
		/* Decimal - Octal */
		for(base = 0; pow(8, base) < decimal; base++) 
		{
			if(pow(8, base + 1) > decimal)
				break;
		}
		
		printf("\t  |\t");
		for(baseCopia = base, resto = decimal; baseCopia >= 0; baseCopia--)
		{
			printf("%d", resto / (int)pow(8, baseCopia));
			resto %= (int)pow(8, baseCopia);
		}
		
		/* Decimal - Hexadecimal */
		for(base = 0; pow(16, base) < decimal; base++) 
		{
			if(pow(16, base + 1) > decimal)
				break;
		}
		
		printf("\t  |\t");
		for(baseCopia = base, resto = decimal; baseCopia >= 0; baseCopia--)
		{
			if((resto / (int)pow(16, baseCopia)) <= 9)
				printf("%d", resto / (int)pow(16, baseCopia));
			else
			{
				switch(resto / (int)pow(16, baseCopia))
				{
					case 10:
						printf("%c", 'A');
						break;
					case 11:
						printf("%c", 'B');
						break;
					case 12:
						printf("%c", 'C');
						break;
					case 13:
						printf("%c", 'D');
						break;
					case 14:
						printf("%c", 'E');
						break;
					case 15:
						printf("%c", 'F');
						break;
				}
			}
			resto %= (int)pow(16, baseCopia);
		}
		printf("\n-----------------------------------------------------------|\n");
	}

   system("PAUSE");
   return 0;
}
