/*
	Author: Rolando Docampo Fernández
	Place: Casa de Marcia 
	Date: 02/04/20 19:14
	Description: 6.15. Utilice un arreglo de un subíndice para resolver el 
	problema siguiente. Lea 20 números, cada uno de los cuales este entre 10 y 
	100 inclusive. Conforme cada número es leído, imprimalo sólo si no es un
	duplicado de un número ya leído. Provea para un "caso peor" en el cual los 
	20 números resulten diferentes. Utilice el arreglo más pequeño posible para
	resolver este problema.
*/
#include<stdio.h>
#include<stdlib.h>
#define T 20

short validez(int [], int, int);

main()
{
	int a[T] = {0};
	short i = 0;
	
	while(i <= T - 1)
	{
		printf("Entre un numero entre el 10 - 100: ");
		scanf("%d", &a[i]);
		
		if(a[i] < 10 || a[i] > 100)
		{
			printf("Valor fuera del rango!.\n");
			continue;
		}
		else if(validez(a, a[i], i))
		{
			printf("Valor no leido: %d\n", a[i]);
		}
		
		++i;
	}
	
	system("PAUSE");
	return 0;
}

short validez(int a[], int valor_leido, int indice)
{
	short i;
	
	for(i = 0; i <= indice - 1; i++)
	{
		if(a[i] == valor_leido)
			return 0;
	}
	
	return 1;
}
