/*
	Author: Rolando Docampo Fernández
	Place: Casa de Marcia
	Date: 30/04/20 22:54
	Description: 8.14. Escriba un programa que introduzca un número telefónico
	como cadena, en la forma (555) 555-5555. El programa deberá utilizar la 
	función strtok para extraer el código de área como token, los tres primeros
	dígitos del número telefónico como token y los últimos cuatro dígitos del
	número telefónico como token. Los siete dígitos del número telefónico 
	deberán ser concatenados en una cadena. El programa deberá convertir la 
	cadena del código del área a int, y convertir la cadena del número 
	telefónico a long. Tanto el código de área como el número telefónico deberán
	ser impresos.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


main()
{
	char numero[200], *p, string[100];
	int area;
	long telefono;
	
	puts("Entre un numero telefonico:");
	gets(numero);
	
	area = atoi(strtok(numero + 1, ")-"));
	while((p = strtok(NULL, ")-")) != NULL)
		strcat(string, p);
	
	strcpy(string, string + 1);
	telefono = atof(string);
	printf("Numero de area: %d\nNumero telefonico: %ld\n", area, telefono);
	
    system("PAUSE");
    return 0;
}
