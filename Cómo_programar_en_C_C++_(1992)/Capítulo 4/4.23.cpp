/* 
	Author: Rolando Docampo Fern�ndez
	Place: INEL Santiago
	Date: 22/08/19 08:59
	Description: 4.23 Modifique el programa de la figura 4.6, de tal forma que 
	s�lo utilice enteros para calcular el inter�s compuesto. (Sugerencia: Trate
	todas las unidades monetarias como n�meros enteros de centavos. A 
	continuaci�n "divida" el resultado en su porci�n d�lares y en su porci�n en
	centavos, mediante el uso de las operaciones de divisi�n y de m�dulos 
	respectivamente. Inserte un punto).
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	int year, amount_dolares, amount_fraccion, principal = 1000, amount;
	double rate = .05;
	
	printf("%4s%21s\n", "Year", "Amount on deposit");
	
	for(year = 1; year <= 10; year++)
	{
		amount = principal * pow(1 + rate, year) * 100;
		amount_dolares = amount / 100;
		amount_fraccion = amount % 100;
		
		if(amount % 100 <= 9)
			printf("%-4d%14d.0%d\n", year, amount_dolares, amount_fraccion);
		else
			printf("%-4d%14d.%d\n", year, amount_dolares, amount_fraccion);
	}

   system("PAUSE");
   return 0;
}
