/*
	Author: Rolando Docampo Fernández
	Place: Casa de Talita Pianta
	Date: 23/10/22 11:19
	Description: 6.35. (Búsqueda binaria). Modifique el programa de la figura 6.19 para 
	utilizar una función recursiva binarySearch para ejecutar la búsqueda binaria del 
	arreglo. La función deberá recibir como argumentos un arreglo entero y el subíndice
	inicial y final. Si el valor buscado es hallado, devuelva el subíndice del arreglo; de
	lo contrario, devuelva -1.
*/
#include<stdio.h>
#include<stdlib.h>
#define SIZE 	15

int binarySearch(int [], int, int , int); /*Función recursiva*/
void printHeader(void);
void printRow(int [], int, int, int);

main()
{
	int a[SIZE], i, key, result;
	
	for(i = 0; i <= SIZE - 1; i++)
		a[i] = 2 * i;
		
	printf("Entre un numero entre 0-28: ");
	scanf("%d", &key);
	
	printHeader();
	result = binarySearch(a, key, 0, SIZE - 1);
	
	if(result != -1)
		printf("\n\"%d encontrado en el elemento de arreglo %d\"\n", key, result);
	else 
		printf("\n%d no encontrado\n", key);	
	
   system("PAUSE");
   return 0;
}

int binarySearch(int b[], int searchKey, int low, int high)
{
	static int middle;
	
	middle = (low + high) / 2;
		
	printRow(b, low, middle, high);
		
	if(searchKey == b[middle])
		return middle;
	else if(low > high)
		return -1;
	else if(searchKey < b[middle])
		return binarySearch(b, searchKey, low, middle - 1);
	else
		return binarySearch(b, searchKey, middle + 1, high);
}

void printHeader(void)
{
	int i;
	
	printf("\nSuscripciones:\n");
	
	for(i = 0; i <= SIZE - 1; i++)
		printf("%3d ", i);
	
	putchar('\n');
	
	for(i = 1; i <= 4 * SIZE; i++)
		printf("-");
		
	putchar('\n');
}

void printRow(int b[], int low, int mid, int high)
{
	int i;
	
	for(i = 0; i <= SIZE - 1; i++)
	{
		if(i < low || i > high)
			printf("    ");
		else if(i == mid)
			printf("%3d*", b[i]);
		else
		 printf("%3d ", b[i]);
	}
	
	putchar('\n');
}
