/*
	Author: Rolando Docampo Fern�ndez
	Place: Casa de Talita Pianta
	Date: 09/04/22 21:22
	Description: 6.30. (La criba de Erastostenes). Un entero primo es cualquier entero que puede ser
	s�lo dividido entre si mismo y entre 1. La criba de Erastostenes es un m�todo para encontrar los 
	n�meros primos. Funciona como sigue:
		1) Instruya un arreglo con todos los elementos inicializados a 1 (verdadero). Los elementos
		del arreglo con sub�ndices primos se conservar�n en 1. Todos los otros elementos del arreglo 
		eventualmente se quedar�n en cero.
		2) Empezando con el sub�ndice 2 del arreglo (el sub�ndice 1 debe ser primo), cada vez que se
		encuentre un elemento de arreglo cuyo valor sea 1, cicle a trav�s del resto del arreglo y 
		defina como cero cualquier elemento cuyo sub�ndice resulte un multiplo del sub�ndice 
		correspondiente al elemento con valor 1. Para el sub�ndice 2 del arreglo, todos los elementos
		m�s all� de 2 dentro del arreglo que sean m�ltiplos de 2, ser�n evaluados en cero (sub�ndices
		4, 6, 8, 10, etc). Para el sub�ndice del arreglo 3, todos los elementos m�s alla de 3 en el 
		arreglo que sean m�ltiplos de 3, ser�n evaluados en cero (sub�ndices 6, 9, 12, 15, etc).
	Cuando se haya terminado este proceso, los elementos del arreglo que a�n est�n definidos como 1, 
	indicar�n que el sub�ndice es un n�mero primo. Entonces esos sub�ndices pueden ser impresos. 
	Escriba un programa que utilice un arreglo de 1000 elementos para determinar e imprimir los 
	n�meros primos entre 1 y 999. Ignore el elemento cero del arreglo.
*/

#include<stdio.h>
#include<stdlib.h>
#define T 1000

void primo(int [], int);

main()
{
	int a[T], i;
	
	/* inicializando el arreglo a todos los elementos en 1*/
	for(i = 1; i <= T - 1; i++)
		a[i] = 1;
	
	for(i = 2; i <= T - 1; i++)
		primo(a, i);
	
	
	for(i = 1; i <= T - 1; i++)
	{			
		if(a[i] == 1)
			printf("%3d - ", i);
	}
	
	putchar('\n');
	
   system("PAUSE");
   return 0;
}

void primo(int b[], int x)
{
	int i, val;
	
	for(i = x; i <= T - 1; i++)
	{
		if(i != x)
			val = i % x;
		else
		   val = 1;
		
		if(b[i] != 0 && val == 0)
			b[i] = 0;
	}
}
