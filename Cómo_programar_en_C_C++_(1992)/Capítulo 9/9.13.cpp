/*
	Author: Rolando Docampo Fernández
	Place: Casa de Marcia 
	Date: 04/05/20 12:58
	Description: 9.13. Escriba un programa que convierta temperaturas Fahrenheit
	enteras desde 0 hasta 212 grados a temperaturas Celsius de punto flotante
	con 3 dígitos de precisión. Utilice la fórmula
		celsius = 5.0 / 9.0 * (fahrenheit - 32);
	para llevar a cabo el cálculo. La salida deberá ser impresa en dos columnas
	justificadas a la derecha, cada una de 10 carácteres, y las temperaturas 
	Celsius deberán ser antecedidas por un signo, tanto como para valores 
	positivos como para valores negativos.
*/
#include<stdio.h>
#include<stdlib.h>
#define TEMP 213

float Celsius(const short *const);

main()
{
	short fahrenheit;
	
	printf("%10s\t%10s\n", "Fahrenheit", "Celsius");
	for(fahrenheit = 0; fahrenheit <= TEMP - 1; fahrenheit++)
		printf("%10d\t%+10.3f\n", fahrenheit, Celsius(&fahrenheit));
		
    system("PAUSE");
    return 0;
}

float Celsius(const short *const fahrenheit)
{
	float celsius;
	
	celsius = 5.0 / 9.0 * (*fahrenheit - 32);
	
	return celsius;
}
