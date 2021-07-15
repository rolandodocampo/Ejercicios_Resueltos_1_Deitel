/*
	Author: Rolando Docampo Fernández
	Place: INEL Santiago
	Date: 30/10/19 21:16
	Description: 5.11. La función floor puede ser utilizada para redondear un 
	número a una cantidad específica de lugares decimales. El enunciado 
	y = floor(x * 10 + .5) / 10; redondea x a la posición de décimos (la primera 
	posición a la derecha del punto decimal). El enunciado 
	y = floor(x * 100 + .5) / 100; redondea x a la posición de las centésimas (es
	decir, a la segunda posición a la derecha del punto decimal). Escriba un 
	programa que defina cuatro funciones para redondear un número x de varias 
	formas:
	a) roundToInterger(number)
	b) roundToTenths(number)
	c) roundToHundreths(number)
	d) roundToThousandths(number)
	Para cada uno de los valores leídos, su programa debe imprimir el valor 
	original, el número redondeado para el entero más cercano, el número 
	redondeado a la décima más cercana, el número redondeado a la centésima más 
	cercana, y el número redondeado a la milésima más cercana
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
