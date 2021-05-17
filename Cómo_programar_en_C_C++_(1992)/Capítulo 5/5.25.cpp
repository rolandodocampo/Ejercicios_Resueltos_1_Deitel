/*
	Author: Rolando Docampo Fernández
	Place: Casa Karenia 
	Date: 23/11/19 10:30
	Description: 5.25. Escribe una función que regrese el más pequeño de tres
	números de punto flotante.
*/

#include<stdio.h>
#include<stdlib.h>

float menor(float, float, float);

main()
{
	float num1, num2, num3;
	
	printf("Introduzca tres numeros decimales: ");
	scanf("%f%f%f", &num1, &num2, &num3);
	printf("El menor de los tres es: %.2f\n", menor(num1, num2, num3));
	
	system("pause");
	return 0;
}

float menor(float num1, float num2, float num3)
{
	float valor = num1;
	
	if(valor > num2)
		valor = num2;
	if(valor > num3)
		valor = num3;
	
	return valor;
}
