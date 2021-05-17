/*
	Author: Rolando Docampo Fernández
	Place: Casa de Marcia 
	Date: 28/04/20 11:15
	Description: 8.9. Escriba un programa que utilice la función strcmp, para
	comparar dos cadenas introducidas por el usuario. El programa deberá 
	indicar	si la primera cadena es menor que, igual que o mayor que la segunda
	cadena.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main()
{
	char cadenas[2][100];
	int comparador;
	
	puts("Entre dos cadenas:");
	gets(cadenas[0]);
	gets(cadenas[1]);
	comparador = strcmp(cadenas[0], cadenas[1]);
	
	if(comparador == 0)
		puts("Son iguales");
	else if(comparador < 0)
		puts("La cadena 1 es menor que la cadena 2");
	else
		puts("La cadena 1 es mayor que la cadena 2");
		
    system("PAUSE");
    return 0;
}
