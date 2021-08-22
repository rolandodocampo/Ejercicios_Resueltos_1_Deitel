/*
	Author: Rolando Docampo Fern�ndez
	Place: Casa de Marcia
	Date: 30/04/20 22:54
	Description: 8.14. Escriba un programa que introduzca un n�mero telef�nico
	como cadena, en la forma (555) 555-5555. El programa deber� utilizar la 
	funci�n strtok para extraer el c�digo de �rea como token, los tres primeros
	d�gitos del n�mero telef�nico como token y los �ltimos cuatro d�gitos del
	n�mero telef�nico como token. Los siete d�gitos del n�mero telef�nico 
	deber�n ser concatenados en una cadena. El programa deber� convertir la 
	cadena del c�digo del �rea a int, y convertir la cadena del n�mero 
	telef�nico a long. Tanto el c�digo de �rea como el n�mero telef�nico deber�n
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
