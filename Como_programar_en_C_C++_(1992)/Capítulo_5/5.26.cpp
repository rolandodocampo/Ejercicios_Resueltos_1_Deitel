/*
	Author: Rolando Docampo Fern�ndez
	Place: Casa Karenia 
	Date: 23/11/19 10:42
	Description: 5.26. Un n�mero entero se dice que se trata de un n�mero 
	perfecto si sus factores, incluyendo a 1 (pero excluyendo en el n�mero 
	mismo), suman igual que el n�mero. Por ejemplo, 6 es un n�mero perfecto 
	porque 6 = 1 + 2 + 3. Escriba una funci�n perfect que determine si el 
	par�metro number es un n�mero perfecto. Utilice esta funci�n en un programa
	que determine e imprima todos los n�meros perfectos entre 1 y 1000. Imprima
	los factores de cada n�mero perfecto para confirmar que el n�mero de verdad
	es perfecto. Ponga en acci�n la potencia de su computadora para probar 
	n�meros m�s grandes que 1000.
*/

#include<stdio.h>
#include<stdlib.h>

short perfect(short);
short factor(short, short);

main()
{
	short valor, i;
	
	printf("Numero perfecto\tDemostracion\n");
	for(valor = 1; valor <= 1000; valor++)
	{
		if(perfect(valor))
		{
			printf("%-15hd\t%hd = ", valor, valor);
			
			for(i = 1; i < valor; i++)
			{
				if(factor(valor, i) != 0)
				{
					printf("%hd + ", factor(valor, i));
				}
			}
			printf("\n");
		}
	}
	
	system("pause");
	return 0;
}

short perfect(short number)
{
	short i, total = 0;
	
	for(i = 1; i < number; i++)
		total += factor(number, i);
	
	if(total == number)
		return 1;
	else
		return 0; 
}

short factor(short number1, short number2)
{
	short residuo;
	
	residuo = number1 % number2;
	
	if(residuo == 0)
		return number2;
	else
		return 0;
}
