/*
	Author: Rolando Docampo Fernández
	Place: Casa de Karenia
	Date: 07/12/19 16:01
	Description: 5.41. (Visualización de la recursión). Es interesante poder 
	observar la recursión en "acción". Modifique la función factorial de la 
	figura 5.14 para imprimir su variable local y su parámetro de llamada 
	recursiva. Para cada llamada recursiva, despliegue las salidas en una línea
	por separado, y añada un nivel de sangría. Haga todo lo posible para que las
	salidas resulten claras, interesantes y significativas. Su meta aquí es 
	diseñar e implementar un formato de salida que le ayude a una persona a una
	mejor comprensión de la recursión. Quizás desee a añadir capacidades de 
	despliegue, tales como éstas, a los muchos otros ejemplos de recursión así
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
