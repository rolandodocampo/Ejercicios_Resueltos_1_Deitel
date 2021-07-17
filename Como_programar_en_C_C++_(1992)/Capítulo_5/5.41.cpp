/*
	Author: Rolando Docampo Fern�ndez
	Place: Casa de Karenia
	Date: 07/12/19 16:01
	Description: 5.41. (Visualizaci�n de la recursi�n). Es interesante poder 
	observar la recursi�n en "acci�n". Modifique la funci�n factorial de la 
	figura 5.14 para imprimir su variable local y su par�metro de llamada 
	recursiva. Para cada llamada recursiva, despliegue las salidas en una l�nea
	por separado, y a�ada un nivel de sangr�a. Haga todo lo posible para que las
	salidas resulten claras, interesantes y significativas. Su meta aqu� es 
	dise�ar e implementar un formato de salida que le ayude a una persona a una
	mejor comprensi�n de la recursi�n. Quiz�s desee a a�adir capacidades de 
	despliegue, tales como �stas, a los muchos otros ejemplos de recursi�n as�
	como a los ejercicios a todo lo largo del texto.
*/
#include<stdio.h>
#include<stdlib.h>

long factorial(long);

main()
{
	int i;
	
	for(i = 1; i <= 10; i++)
	{
		printf("%d! = %ld\n", i, factorial(i));
		printf("***************************\n");
	}
		

   system("PAUSE");
   return 0;
}

long factorial(long number)
{
	static short i = 1;
	short j;
	
	printf("%ld! = %ld * %ld!\n", number, number, number - 1);
	
	for(j = 1; j <= i * 9; j++)
		printf("%c", ' ');
	
	if(number - 1 == 0)
		printf("%ld! = %ld\n", number - 1, 1);
	
	i++;
	
	if(number <= 1)
	{
		i = 1;
		return 1;
	}
		
	return number * factorial(number - 1);
}
