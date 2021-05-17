/*
	Author: Rolando Docampo Fernández
	Place: Casa de Marcia 
	Date: 04/04/20 10:28
	Description: 6.19.Escriba un programa en C que simule el tirar dos dados. El
	programa deberá utilizar rand para tirar el primer dado, y después deberá 
	utilizar rand para tirar el segundo. La suma de los dos valores deberá 
	entonces ser calculada. Nota: en vista de que cada dado puede mostrar un 
	valor entero de 1 a 6, entonces la suma de los dos valores variará desde 2
	hasta 12, siendo 7 la suma mas frecuente y 2 y 12 las menos frecuentes. En
	la figura 6.23 se muestran las 36 combinaciones posibles de los dos dados.
	Su programa deberá tirar 36000 veces los dos dados. Utilice un arreglo de un
	subíndice para llevar cuenta del número de veces que aparece cada suma 
	posible. Imprima los resultados en un formato tabular. También, determine si
	los totales son rasonables, es decir, excisten 6 formas de llegar a un 7, 
	por lo que aproximadamente una sexta parte de todas las tiradas deberán ser
	7.
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define T 11
#define TIRADAS 36000

int tirada(void);
short indice(void);

main()
{
	int sumas[T] = {0}, i;
	
	srand(time(NULL));
		
	for(i = 1; i <= TIRADAS; i++)
		++sumas[indice()];
	
	printf("%22s\n", "Sumas de tiradas");
	printf("2     3     4     5     6     7     8     9     10     11     12\n");
	printf("------------------------------------------------------------------\n");
	
	for(i = 0; i <= T - 1; i++)
		printf("%-4d  ", sumas[i]);
	
	printf("\n");
	
	system("PAUSE");
	return 0;
}

int tirada(void)
{
	int dado1, dado2, suma;
	
	dado1 = rand() % 6 + 1;
	dado2 = rand() % 6 + 1;
	suma = dado1 + dado2;
	return suma;
}

short indice(void)
{
	int suma;
	
	suma = tirada();
	
	switch(suma)
	{
		case 2:
			return 0;
			break;
		case 3:
			return 1;
			break;
		case 4:
			return 2;
			break;
		case 5:
			return 3;
			break;
		case 6:
			return 4;
			break;
		case 7:
			return 5;
			break;
		case 8:
			return 6;
			break;
		case 9:
			return 7;
			break;
		case 10:
			return 8;
			break;
		case 11:
			return 9;
			break;
		case 12:
			return 10;
			break;
	}
}
