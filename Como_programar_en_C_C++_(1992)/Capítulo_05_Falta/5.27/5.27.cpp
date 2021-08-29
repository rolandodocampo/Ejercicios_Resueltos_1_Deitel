/*
	Author: Rolando Docampo Fern�ndez
	Place: Casa Karenia 
	Date: 23/11/19 11:28
	Description: 5.27. Se dice que un n�mero es primo si es divisible s�lo entre
	1 y si mismo. Por ejemplo, 2, 3, 5 y 7 son primos, pero 4, 6, 8 y 9 no lo
	son.
	a) Escriba una funci�n que determine si un n�mero es primo.
	b) Utilice esta funci�n en un programa que determine e imprima todos los 
	n�meros primos entre 1 y 10000. �Cu�ntos de estos 10000 n�meros tendr� que 
	probar verdaderamente antes de estar seguro que se han encontrado todos los 
	n�meros primos?.
	c) Inicialmente pudiera pensar que n/2 es el l�mite superior para el cual
	debe usted probar para ver si un n�mero es primo, pero s�lo necesita llegar
	hasta la ra�z cuadrada de n. �Por qu�?. Vuelva a escribir el programa, y 
	ejec�telo de ambas formas. Estime la mejor�a en rendimiento.
*/

#include<stdio.h>
#include<stdlib.h>

short inciso_a(short);

main()
{
	short i;
	
	for(i = 1; i <= 10000; i++)
	{			
		if(inciso_a(i))
				printf("%hd, ", i);				
	}
	printf("\n");
		
	system("pause");
	return 0;
}

short inciso_a(short numero)
{
	short i, contador = 0;
	
	for(i = 2; i < numero; i++)
	{
		if(numero % i == 0)
			contador++;		
	}
	
	if(contador == 0)
		return 1;
	else 
		return 0;
}
