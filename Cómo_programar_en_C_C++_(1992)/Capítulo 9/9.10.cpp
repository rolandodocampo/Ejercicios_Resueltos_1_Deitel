/*
	Author: Rolando Docampo Fernández
	Place: Casa de Marcia
	Date: 04/05/20 12:35
	Description: 9.10. Escriba un programa para probar el resultado de imprimir
	el valor entero 12345 y el de punto flotante 1.2345 en varios tamaños de 
	campo. Qué pasa cuando se imprimen los valores en campos que contienen menos
	dígitos que los valores mismos?
*/
#include<stdio.h>
#include<stdlib.h>

main()
{
	printf("%d\t%f\n", 12345, 1.2345);
	printf("%3d\t%3f\n", 12345, 1.2345);
	printf("%5d\t%5f\n", 12345, 1.2345);
	printf("%10d\t%10f\n", 12345, 1.2345);
	
    system("PAUSE");
    return 0;
}
