/*
	Author: Rolando Docampo Fernández
	Place: Casa Karenia
	Date: 02/12/19 08:45
	Description: 5.31. Escriba un programa que simule lanzar una moneda. Para
	cada lanzamiento de la moneda el programa deberá imprimir Heads o Tails. 
	Permita que el programa lance la moneda 100 veces, y cuente el número de 
	veces que aparece alguno de los dos lados de la moneda. Imprima los 
	resultados. El programa deberá llamar una función separada o distinta flip,
	que no toma argumentos y que regresa 0 para las caras, y 1 para las cruces.
	Nota: si el programa simula en forma realista el lanzamiento de la moneda,
	entonces cada cara de la misma deberá aparecer aproximadamente la mitad del
	tiempo para un total de aproximadamente 50 caras y 50 cruces.
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

short flip(void);

main()
{
	short i, cara = 0;
	
	srand(time(NULL));
	
	for(i = 1; i <= 100; i++)
	{
		if(flip() == 0)
			cara++;
	}
	
	printf("Caras: %hd\nCruces: %hd\n", cara, 100 - cara);
	
	system("pause");
	return 0;
}

short flip(void)
{
	short i;
	
	i = rand() % 2;
	
	if(i == 0)
	{
		printf("Heads\n");
		return 0;
	}
	else
	{
		printf("Tails\n");
		return 1;
	}
}
