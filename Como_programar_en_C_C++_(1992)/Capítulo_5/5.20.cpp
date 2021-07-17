/*
	Author: Rolando Docampo Fern�ndez
	Place: Casa Karenia
	Date: 16/11/19 16:07
	Description: 5.20. Modifique la funci�n creada en el ejercicio 5.19 para 
	formar el cuadrado en base a cualquier car�cter que este contenido en el 
	par�metro de car�cter fillCharacter. Por lo tanto si side es 5 y 
	fillCharacter es "#" entonces esta funci�n deber�a imprimir:
		#####
		#####
		#####
		#####
		#####
*/

#include <stdio.h>
#include <stdlib.h>

void cuadrado(short);
void fillCharacter(char);

main()
{
	short lado;
	
	printf("Introduzca el valor del lado del cuadrado: ");
	scanf("%hd", &lado);
	cuadrado(lado);
	
	system("PAUSE");
	return 0;
}

void cuadrado(short side)
{
	register short fila, columna;
	char character;
	
	printf("Introduzca el caracter que desea imprimir el cuadrado: ");
	scanf("%c", &character);
	
	while(character == ' ' || character == '\n')
		scanf("%c", &character);
	
	for(fila = 1; fila <= side; fila++)
	{
		for(columna = 1; columna <= side; columna++)
			fillCharacter(character);
		
		printf("\n");
	}
}

void fillCharacter(char caracter)
{
	printf("%c", caracter);
}
