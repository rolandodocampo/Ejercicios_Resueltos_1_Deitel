/*
	Author: Rolando Docampo Fernández
	Place: Casa de Marcia
	Date: 04/05/20 11:26
	Description: 9.7. Escriba un programa que carge el arreglo de 10 elementos
	number con enteros al azar, desde 1 hasta 1000. Para cada uno de los valores,
	imprima el valor y el total acumulado del número de carácteres impresos. 
	Utilice la especificación de conversión %n para determinar el número de 
	carácteres ya extraidos para cada valor. Imprima el número total de 
	carácteres extraidos para todos los valores incluyendo el valor actual, cada
	vez que este sea impreso. La salida deberá tener el formato siguiente:
		Value	Total characters
		342		3
		1000	7
		963		10
		6		11
		etc
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void carga(int []);

main()
{
	int number[10], i, valores, total = 0;
	
	carga(number);
	
	printf("%s\t%s\n", "Value", "Total characters");
	for(i = 0; i <= 9; i++)
	{
		printf("%d%n", number[i], &valores);
		total += valores;
		printf("\t%d\n", total);
	}
		
    system("PAUSE");
    return 0;
}

void carga(int number[])
{
	short i;
	
	for(i = 0; i <= 9; i++)
		number[i] = rand() % 1000 + 1;
}
