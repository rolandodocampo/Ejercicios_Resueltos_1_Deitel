/*
	Author: Rolando Docampo Fernández
	Place: Casa de Marcia
	Date: 04/05/20 12:14
	Description: 9.8. Escriba un programa para probar las diferencias entre los 
	especificadores de conversión %d y %i al ser utilizados en un enunciado 
	scanf. Utilice los enunciados: 
		scanf("%i%d", &x, &y);
		printf("%d%d\n", x, y);
	para introducir e imprimir los valores. Pruebe el programa con los 
	siguientes conjuntos de datos de entrada:
	 	 10		 10
		-10		-10
		010		010
	   0x10	   0x10
*/
#include<stdio.h>
#include<stdlib.h>

main()
{
	int x, y, i;
	
	printf("%%i\t%%d\n");
	for(i = 0; i <= 3; i++)
	{
		scanf("%i%d", &x, &y);
		printf("%d\t%d\n", x, y);
	}
	
    system("PAUSE");
    return 0;
}
