/*
	Author: Rolando Docampo Fernández
	Place: Casa de Talita
	Date: 21/09/21 06:31
	Description: 6.38. (Imprimir una cadena de atrás para adelante). Escriba una función recursiva
	stringReverse que tome un arrgelo de caracteres como argumento y que no regrese nada. La función 
	deberá dejar de procesar y regresar cuando se encuentre el carácter nulo de terminación de la
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
