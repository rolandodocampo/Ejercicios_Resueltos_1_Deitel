/*
	Name: Calculadora de promedio, moda y mediana
	Author: Rolando Docampo Fernandez
	Place: Casa de Talita Pianta
	Date: 11/05/21 15:45
	Description: Programa que inicializa un arreglo de 99 elementos todos ellos inicializados con un valor de 1-9 de 
	forma aleatoria. E programa es capaz de calcular el promedio, la mediana y la moda de todos los valores.
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define CANT 99
#define RESP 10

void imp(const char [], const char); // IMPRIME ARREGLO
void ini(char [], const char); // INICIALIZA ARREGLO
extern float promedio(const char [], const char); // PROMEDIO
extern void ordenamiento(char [], const char); // ORDENAMIENTO EN ORDEN ASCENDENTE
extern char mediana(const char [], const char); // MEDIANA
extern char modo(const char [], const char); // MODO (VALOR QUE MAS SE REPITE)

main()
{
	char res[CANT] = {0}; 
	
	srand(time(NULL));
	imp(res, CANT);
	ini(res, CANT);
	printf("*****************************************************************\n");
	imp(res, CANT);
	printf("*****************************************************************\n");
	ordenamiento(res, CANT);
	imp(res, CANT);
	printf("*****************************************************************\n");
	printf("Promedio: %.2f\n", promedio(res, CANT));
	printf("Mediana: %d\n", mediana(res, CANT));
	printf("Modo: %d\n", modo(res, CANT));
	
   system("PAUSE");
   return 0;
}

void imp(const char resp[], const char tam) // IMPRIME EL ARREGLO
{
	register char i;
	
	for(i = 0; i <= tam - 1; i++)
		((i + 1) % 10 == 0) ? putchar('\n') : printf("%d\t", resp[i]);
	
	printf("\n");
}

void ini(char a[], const char size)
{
	register char i;
	
	for(i = 0; i <= size - 1; i++)
		a[i] = 1 + rand() % 9;
}

extern float promedio(const char encuesta[], const char tam)
{
	auto short total = 0, i;
	
	for(i = 0; i <= tam - 1; i++)
		total += encuesta[i];
		
	return (float)total / tam;
}

extern void ordenamiento(char arreglo[], const char tam)
{
	char inter, memoria, comp;
	
	for(inter = 1; inter <= tam - 1; inter++)
	{
		for(comp = 0; comp <= tam - 2; comp++)
		{
			if(arreglo[comp] > arreglo[comp + 1])
			{
				memoria = arreglo[comp];
				arreglo[comp] = arreglo[comp + 1];
				arreglo[comp + 1] = memoria; 
			}
		}
	}
}

extern char mediana(const char b[], const char tam)
{
	return b[tam / 2];
}

extern char modo(const char c[], const char tam)
{
	char frec[RESP] = {0}, i, mayor, valor;
	
	for(i = 0; i <= tam - 1; i++)
		++frec[c[i]];
	
	mayor = frec[0];
	
	for(i = 1; i <= RESP - 1; i++)
	{
		if(frec[i] > mayor)
		{
			mayor = frec[i];
			valor = i;
		}
	}
	
	return valor;
}
