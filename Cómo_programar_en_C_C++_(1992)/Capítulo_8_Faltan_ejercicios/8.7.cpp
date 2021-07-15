/*
	Author: Rolando Docampo Fernández
	Place: Casa de Marcia
	Date: 28/04/20 10:23
	Description: 8.7. Escriba a programa que introduzca 4 cadenas que 
	representen enteros, convierta las cadenas a enteros, sume los valores e 
	imprima el total de los 4 valores;
*/
#include<stdio.h>
#include<stdlib.h>

main()
{
	char numeros[4][100];
	int var[4], i, total = 0;
	
	puts("Introduzca 4 cadenas de valores enteros:");
	
	for(i = 0; i <= 3; i++)
		gets(numeros[i]);
	
	for(i = 0; i <= 3; i++)
	{
		var[i] = atoi(numeros[i]);
		total += var[i];
	}
		
	printf("Los numeros son: %d, %d, %d, %d\nEl total es: %d\n", var[0], var[1],
		   var[2], var[3], total);
		   
    system("PAUSE");
    return 0;
}
