/*
	Author: Rolando Docampo Fernández
	Place: Casa de Marcia 
	Date: 02/04/20 19:51
	Description: 6.16. Etiquete los elementos de un arreglo de doble subíndice
	de 3 por 5, de nombre sales, para indicar el orden en el cual se definen a 
	cero, mediante el siguiente segmento de programa:
		for(row = 0; row <= 2; row++)
			for(column = 0; column <= 4; column++)
				sales[row][column] = 0;
*/
#include<stdio.h>
#include<stdlib.h>
#define F 3
#define C 5
main()
{
	int a[F][C], row, column, contador = 1;
	
	printf("    0   1   2   3   4\n---------------------\n");
	for(row = 0; row <= F - 1; row++)
	{
		printf("%d| ", row);
		for(column = 0; column <= C - 1; ++contador, column++)
			printf("%2d  ", contador);
		
		printf("\n");	
	}
	
	system("PAUSE");
	return 0;
}

