/*
	Author: Rolando Docampo Fern�ndez
	Place: Casa Karenia
	Date: 16/11/19 15:55
	Description: 5.19. Escriba una funci�n que despliegue en el margen izquierdo 
	de la pantalla un cuadrado s�lido de asteriscos, cuyo costado o lado est� 
	especificado en el par�metro entero side. Por ejemplo, si side es 4, la 
	funci�n mostrar�:
		****
		****
		****
		****
*/

#include <stdio.h>
#include <stdlib.h>

void cuadrado(short);

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
	
	for(fila = 1; fila <= side; fila++)
	{
		for(columna = 1; columna <= side; columna++)
			printf("*");
		
		printf("\n");
	}
}
