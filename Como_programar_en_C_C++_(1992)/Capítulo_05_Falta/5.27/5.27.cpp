/*
	Author: Rolando Docampo Fernández
	Place: Casa Karenia 
	Date: 23/11/19 11:28
	Description: 5.27. Se dice que un número es primo si es divisible sólo entre
	1 y si mismo. Por ejemplo, 2, 3, 5 y 7 son primos, pero 4, 6, 8 y 9 no lo
	son.
	a) Escriba una función que determine si un número es primo.
	b) Utilice esta función en un programa que determine e imprima todos los 
	números primos entre 1 y 10000. ¿Cuántos de estos 10000 números tendrá que 
	probar verdaderamente antes de estar seguro que se han encontrado todos los 
	números primos?.
	c) Inicialmente pudiera pensar que n/2 es el límite superior para el cual
	debe usted probar para ver si un número es primo, pero sólo necesita llegar
	hasta la raíz cuadrada de n. ¿Por qué?. Vuelva a escribir el programa, y 
	ejecútelo de ambas formas. Estime la mejoría en rendimiento.
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
