/*
	Author: Rolando Docampo Fern�ndez
	Place: Casa de Talita
	Date: 21/09/21 06:31
	Description: 6.38. (Imprimir una cadena de atr�s para adelante). Escriba una funci�n recursiva
	stringReverse que tome un arrgelo de caracteres como argumento y que no regrese nada. La funci�n 
	deber� dejar de procesar y regresar cuando se encuentre el car�cter nulo de terminaci�n de la
	cadena
*/
#include<stdio.h>
#include<stdlib.h>
#define TAM 20

void stringReverse(char []);

main()
{
	char cadena[TAM];
	
	printf("Entre una cadena de caracteres: ");
	scanf("%s", cadena);
	printf("Cadena de caracteres a la inversa: ");
	stringReverse(cadena);
	putchar('\n');

   system("PAUSE");
   return 0;
}

void stringReverse(char cadena[])
{
	if(cadena[0] != '\0')
	{
		stringReverse(&cadena[1]);
		printf("%c", cadena[0]);
	}
}
