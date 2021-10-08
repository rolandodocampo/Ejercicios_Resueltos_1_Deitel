/*
	Author: Rolando Docampo Fernández
	Date: 18/09/21 21:49
	Description: 6.39 (Encontrar el valor mínimo en un arreglo). Escriba la función recursiva 
	recursiveMinimum, que toma un arreglo entero y el tamaño del arreglo como argumentos y regresa el
	elemento del arreglo más pequeño del mismo. La función deberá detener su proceso y regresar 
	cuando reciba un arreglo de un solo subíndice.
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 20

void inicializar(int [], const int);
int recursiveMinimum(const int [], int);
void imprimir(int [], int);

main()
{
	int tabla[SIZE];
	
	srand(time(NULL));
	inicializar(tabla, SIZE);
	imprimir(tabla, SIZE);
	printf("Menor: %d\n", recursiveMinimum(tabla, SIZE));

   system("PAUSE");
   return 0;
}

void inicializar(int array[], const int tam)
{
	int i;
	
	for(i = 0; i <= tam - 1; i++)
		array[i] = rand() % tam + 1;
}

int recursiveMinimum(const int tabla[], int t)
{
	int menor;
	
	if(t == 0)
	{
		menor = tabla[t];
		return menor;
	}
	
	menor = recursiveMinimum(tabla, t - 1);
	
	if(menor > tabla[t])
			menor = tabla[t];
	
	return menor;
}

void imprimir(int a[], int t)
{
	int i;
	
	for(i = 0; i <= t - 1; i++)
		printf("%d ", a[i]);
		
	putchar('\n');
}
