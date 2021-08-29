/*
	Author: Rolando Docampo Fernández
	Place: Casa de Marcia 
	Date: 28/04/20 11:22
	Description: 8.10. Escriba un programa que utilice la función strncmp, para 
	comparar dos cadenas introducidas por el usuario. El programa deberá 
	introducir el número de carácteres a compararse. El programa deberá indicar
	si la primera cadena es menor que, igual que o mayor que la segunda cadena.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main()
{
	char cadena[2][100];
	int i, validacion;
	size_t cantidad;
	
	puts("Entre dos cadenas para comparar:");
	gets(cadena[0]);
	gets(cadena[1]);
	puts("Cuantos caracteres quieres comparar:");
	scanf("%u", &cantidad);
	validacion = strncmp(cadena[0], cadena[1], cantidad);
	
	if(validacion == 0)
		printf("Ambas cadenas con %u caracteres de comparacion son iguales.\n", 
			 cantidad);
	else if(validacion < 0)
		printf("La cadena 1 con %u caracteres de comparacion es menor que la cadena 2.\n", 
			 cantidad);
	else
		printf("La cadena 1 con %u caracteres de comparacion es mayor que la cadena 2.\n", 
			 cantidad);
	
    system("PAUSE");
    return 0;
}
