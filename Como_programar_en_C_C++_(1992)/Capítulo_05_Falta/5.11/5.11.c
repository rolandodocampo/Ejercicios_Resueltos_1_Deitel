/*
	Author: Rolando Docampo Fern�ndez
	Place: INEL Santiago
	Date: 30/10/19 21:16
	Description: 5.11. La funci�n floor puede ser utilizada para redondear un 
	n�mero a una cantidad espec�fica de lugares decimales. El enunciado 
	y = floor(x * 10 + .5) / 10; redondea x a la posici�n de d�cimos (la primera 
	posici�n a la derecha del punto decimal). El enunciado 
	y = floor(x * 100 + .5) / 100; redondea x a la posici�n de las cent�simas (es
	decir, a la segunda posici�n a la derecha del punto decimal). Escriba un 
	programa que defina cuatro funciones para redondear un n�mero x de varias 
	formas:
	a) roundToInterger(number)
	b) roundToTenths(number)
	c) roundToHundreths(number)
	d) roundToThousandths(number)
	Para cada uno de los valores le�dos, su programa debe imprimir el valor 
	original, el n�mero redondeado para el entero m�s cercano, el n�mero 
	redondeado a la d�cima m�s cercana, el n�mero redondeado a la cent�sima m�s 
	cercana, y el n�mero redondeado a la mil�sima m�s cercana
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double roundToInteger(double);
double roundToTenths(double);
double roundToHundreths(double);
double roundToThousandths(double);

main()
{
	double x;
	
		printf("Entre un numero flotante: ");
		scanf("%lf", &x);
		printf("Valor original\tRedondeo\n");
		printf("%14f\t%8.0f\n", x, roundToInteger(x));
		printf("%14f\t%8.1f\n", x, roundToTenths(x));
		printf("%14f\t%8.2f\n", x, roundToHundreths(x));
		printf("%14f\t%8.3f\n", x, roundToThousandths(x));
		
   system("PAUSE");
   return 0;
}

double roundToInteger(double number)
{
	double y;
	
	y = floor(number + .5);
	
	return y;
}

double roundToTenths(double number)
{
	double y;
	
	y = floor(number * 10 + .5) / 10;
	
	return y;
}

double roundToHundreths(double number)
{
	double y;
	
	y = floor(number * 100 + .5) / 100;
	
	return y;
}

double roundToThousandths(double number)
{
	double y;
	
	y = floor(number * 1000 + .5) / 1000;
	
	return y;
}
