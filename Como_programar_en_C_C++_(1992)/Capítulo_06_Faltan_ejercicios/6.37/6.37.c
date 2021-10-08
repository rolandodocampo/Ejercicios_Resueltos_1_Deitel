/*
	Author: Rolando Docampo Fernández
	Place: Casa de Talita Pianta
	Date: 18/09/21 21:27
	Description: 6.37. (Imprima un arreglo). Escriba una función recursiva printArray que toma un 
	arreglo y el tamaño del arreglo como argumentos y que no devuelva nada. La función deberá dejar
	de procesar y regresar cuando reciba un arreglo de tamaño cero.
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 10

void inicializar(int [], const int);
void printArray(int [], int);

main()
{
	int tabla[SIZE];
	
	inicializar(tabla, SIZE);
	printArray(tabla, SIZE);
	putchar('\n');
	
   system("PAUSE");
   return 0;
}

void inicializar(int array[], const int tam)
{
	int i;
	
	for(i = 0; i <= tam - 1; i++)
		array[i] = rand() % tam + 1;
}

void printArray(int a[], int t)
{
	if(t == 0)
		return;
	else
		printArray(a, t - 1);
	
	printf("%d ", a[t - 1]);
}
