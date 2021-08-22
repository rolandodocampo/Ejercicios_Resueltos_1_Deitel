/*
	Author: Rolando Docampo Fernández
	Place: Casa Karenia 
	Date: 23/11/19 09:39
	Description: 5.24. Ponga en marcha las siguientes funciones enteras:
	a) La función celsius que regresa el equivalente Celsius de una temperatura
	en Fahrenheit.
	b) La función fahrenheit que regresa el equivalente en fahrenheit de una 
	temperatura en Celsius.
	c) Utilice ambas funciones para escribir un programa que imprima gráficos 
	mostrando los equivalentes Fahrenheit de todas las temperaturas Celsius 
	desde 0 hasta 100 grados, y los equivalentes Celsius de todas las 
	temperaturas Fahrenheit entre 32 y 212 grados. Imprima las salidas en un 
	formato tabular nítido, que minimice el número de líneas de salida 
	manteniéndose legible.
*/

#include<stdio.h>
#include<stdlib.h>

int Celsius(int);
int Fahrenheit(int);
void inciso_c(void);

main()
{
	int valor;
	
	inciso_c();
	
	system("pause");
	return 0;
}

int Celsius(int fahrenheit)
{
	return (fahrenheit - 32) / 1.8;
}

int Fahrenheit(int celsius)
{
	return 1.8 * celsius + 32;
}

void inciso_c(void)
{
	int celsius, fahrenheit;
	
	printf("Celsius  Fahrenheit  *  Fahrenheit  Celsius\n");
	for(fahrenheit = 32, celsius = 0; fahrenheit <= 212; fahrenheit++)
	{
		if(celsius <= 100)
		{
			printf("%7d  %10d  *  ", celsius, Fahrenheit(celsius));
			celsius++;	
		}
		else
			printf("%19c  *  ", ' ');
		
		printf("%10d  %7d\n", fahrenheit, Celsius(fahrenheit));
	}
}
