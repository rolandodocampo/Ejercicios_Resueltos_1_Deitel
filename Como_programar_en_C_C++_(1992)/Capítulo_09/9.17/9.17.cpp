/*
	Author: Rolando Docampo Fernández
	Place: Casa de Marcia
	Date: 04/05/20 14:03
	Description: 9.17. Escriba un programa que utilice cada uno de los 
	especificadores de conversión e, f, y g para introducir el valor 1.2345. 
	Imprima los valores de cada variable para probar que cada especificador de 
	conversión puede ser utilizado para introducir este mismo valor.
*/
#include<stdio.h>
#include<stdlib.h>

main()
{
	float valor_e, valor_f, valor_g;
	
	puts("Entre el valor 1.2345");
	scanf("%e", &valor_e);
	scanf("%f", &valor_f);
	scanf("%g", &valor_g);
	puts("*************************");
	printf("valor_e: %f\n", valor_e);
	printf("valor_f: %f\n", valor_f);
	printf("valor_g: %f\n", valor_g);
	
    system("PAUSE");
    return 0;
}
