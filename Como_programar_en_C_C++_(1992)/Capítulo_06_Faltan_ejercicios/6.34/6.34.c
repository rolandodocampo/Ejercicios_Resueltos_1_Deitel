/*
	Author: Rolando Docampo Fernández
	Place: Casa de Talita Pianta
	Date: 18/09/21 20:52
	Description: 6.34. (Búsqueda lineal). Modifique el programa de la figura 6.18 para utilizar una
	función recursiva linearSearch para ejecutar la búsqueda lineal del arreglo. La función deberá 
	recibir como argumentos un arreglo entero y el tamaño del arreglo. Si se encuentra el valor 
	buscado, devuelva el subíndice del arreglo; de lo contrario devuelva -1.
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 10

int linearSearch(int [], int, int);
void inicializar(int [], const int);
void imprimir(int [], int);

main()
{
	int a[SIZE], searchKey, element;
	
	srand(time(NULL));
	inicializar(a, SIZE);
	imprimir(a, SIZE);
	
	printf("Enter integer search key:\n");
	scanf("%d", &searchKey);
	element = linearSearch(a, searchKey, SIZE);
	
	if(element != -1)
		printf("Found value in element %d\n", element);
	else
		printf("Value not found.\n");
		
   system("PAUSE");
   return 0;
}

void inicializar(int array[], const int tam)
{
	int i;
	
	for(i = 0; i <= tam - 1; i++)
		array[i] = rand() % tam + 1;
}

int linearSearch(int array[], int key, int size)
{
	if(array[size - 1] == key)
		return size - 1;
	else if(size == 0)
		return -1;
	
	linearSearch(array, key, size - 1);
}

void imprimir(int a[], int t)
{
	int i;
	
	for(i = 0; i <= t - 1; i++)
		printf("%d ", a[i]);
		
	putchar('\n');
}
