/*
	Author: Rolando Docampo Fernández
	Place: Casa de Talita Pianta
	Date: 09/04/22 14:28
	Description: 6.28 (Eliminación de duplicados). En el capítulo 12 exploramos la estructura de datos del
	árbol de búsqueda binaria de alta velocidad. Una característica del árbol de búsqueda binaria, es
	que los valores duplicados son descartados al hacer inserciones en el árbol. Esto se conoce como 
	eliminación de duplicados.
	Escriba un programa que produzca 20 números al azar entre 1 y 20. El programa deberá almacenar en
	un arreglo todos los valores no duplicados. Utilice para esta tarea el arreglo más pequeño 
	posible.
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define TAM 20

void generador(char []);
void imp(const char []);
void org(char []);
short busq(const char [], const char);

main()
{
	char tabla[TAM] = {0};
	
	srand(time(NULL));
	generador(tabla);
	imp(tabla);
	
   system("PAUSE");
   return 0;
}

short busq(const char v[], const char valor)
{
	char low = 0, big = TAM - 1, med;
	
	while(low <= big)
	{
		med = (big + low) / 2;
		
		if(v[med] == valor)
		   return 1;
		else if(v[med] > valor)
			big = med - 1;
		else
		   low = med + 1;
	}
	
	return 0;
}

void imp(const char a[])
{
	char i;
	
	printf("*****************************************************************************************\n");
	for(i = 0; i <= TAM - 1; i++)
		i <= 9 ? printf("[%d] ", i) : printf("[%2d] ", i);
	
	putchar('\n');
	for(i = 0; i <= TAM - 1; i++)
		i <= 9 ? printf("%2d  ", a[i]) : printf("%3d  ", a[i]);
	putchar('\n');
	printf("*****************************************************************************************\n");
}

void generador(char x[])
{
	char cont, valor;
	
	for(cont = 0; cont <= TAM - 1; cont++)
	{
		valor = 1 + rand() % TAM;
		
		if(busq(x, valor) == 0)
		{
			x[0] = valor;
			org(x);
		}
		else
			--cont;
	}		
}

void org(char b[])
{
	char i, j, hold;
	
	for(i = 1; i <= TAM - 1; i++)
	{
		for(j = 0; j <= TAM - 2; j++)
		{
			if(b[j] > b[j + 1])
			{
				hold = b[j + 1];
				b[j + 1] = b[j];
				b[j] = hold;
			}
		}
	}
}
