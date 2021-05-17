/*
	Author: Rolando Docampo Fernández
	Place: INEL Santiago
	Date: 22/08/19 13:46
	Description: 4.25 Imprima la tabla de equivalentes decimales, binarios, 
	octales y hexadecimales. Si no esta familiarizado con estos sistemas 
	numéricos, lea primero el apéndice E, si desea tratar de resolver este 
	ejercicio.
		Decimal		Binario		Octal			Hexadecimal
			0				0			  0				  0
			1				1			  1				  1
			2				10			  2    			  2	
			3				11			  3				  3
			4				100		  4				  4
			5				101		  5				  5
			6				110		  6				  6	
			7				111		  7				  7
			8			  1000		  10				  8
			9			  1001		  11				  9
			10			  1010		  12				  A
			11			  1011		  13				  B
			12			  1100		  14				  C
			13			  1101		  15				  D
			14			  1110		  16				  E
			15			  1111	     17				  F				
			16			  10000		  20 				  10
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	int decimal, base, binario = 0, baseCopia, resto;
	
	printf("%s\t  |\t%s\t  |\t%s\t  |\t%s|\n", "Decimal", "Binario", "Octal", "Hexadecimal");
	printf("-----------------------------------------------------------|\n");
	for(decimal = 0; decimal <= 16; decimal++)
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
