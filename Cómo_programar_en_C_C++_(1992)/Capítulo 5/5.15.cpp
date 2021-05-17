/*
	Author: Rolando Docampo Fern�ndez
	Place: Casa Karenia
	Date: 16/11/19 15:33
	Description: 5.15. Defina una funci�n hypotenuse que calcule la longitud de
	la hipotenusa de un tri�ngulo rect�ngulo, cuando son conocidos los otros dos
	lados. Utilice esta funci�n en un programa para determinar la longitud de la
	hipotenusa de los tri�ngulos siguientes. La funci�n debe tomar dos 
	argumentos del tipo double y regresar la hipotenusa tambi�n como double.
		Tri�ngulo		Lado 1		Lado 2
		1				3.0			4.0
		2				5.0			12.0
		3				8.0			15.0
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double hypotenuse(double, double);

main()
{
	double cateto1, cateto2;
	
	do
	{
		printf("Entre el cateto 1 (EOF para terminar): ");
		scanf("%lf", &cateto1);
		
		if(cateto1 == EOF)
			break;
		
		printf("Entre el cateto 2: ");
		scanf("%lf", &cateto2);
		printf("La hipotenusa es: %.1f\n", hypotenuse(cateto1, cateto2));
	}while(1);

   system("PAUSE");
   return 0;
}

double hypotenuse(double cateto1, double cateto2)
{
	return pow(cateto1, 2) + pow(cateto2, 2);	
}
