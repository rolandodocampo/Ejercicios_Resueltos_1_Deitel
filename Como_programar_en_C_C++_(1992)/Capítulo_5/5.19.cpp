/*
	Author: Rolando Docampo Fernández
	Place: Casa Karenia
	Date: 16/11/19 15:55
	Description: 5.19. Escriba una función que despliegue en el margen izquierdo 
	de la pantalla un cuadrado sólido de asteriscos, cuyo costado o lado está 
	especificado en el parámetro entero side. Por ejemplo, si side es 4, la 
	función mostrará:
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
