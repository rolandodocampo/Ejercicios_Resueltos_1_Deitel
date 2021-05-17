/*
	Author: Rolando Docampo Fernández
	Place: Casa de Karenia
	Date: 04/12/19 15:14
	Description: 5.38. La serie Fibonacci: 0, 1, 1, 2, 3, 5, 8, 13, 21, ...
	empieza con los términos 0 y 1 y tiene la propiedad que cada término 
	siguiente es la suma de los dos términos precedentes. a) Escriba una función
	no recursiva fibonacci (n) que calcule el número Fibonacci de orden n. 
	b) Determine el número Fibonacci más grande que pueda ser impreso en su
	sistema. Modifique el problema de la parte a) para utilizar double en vez de
	int, a fin de calcular y regresar números Fibonacci. Deje que el programa 
	cicle hasta que falle debido a valores en exceso alto.
*/
#include<stdio.h>
#include<stdlib.h>

int fibonacci(int);

main()
{
   int n;
   
   printf("Entre el numero n de la serie Fibonacci: ");
   scanf("%d", &n);
   printf("Fibonacci(n) = %d\n", fibonacci(n));

   system("PAUSE");
   return 0;
}

int fibonacci(int n)
{
	int termino_0 = 0, termino_1 = 1, termino_siguiente, orden;
	
	if(n == 0)
		return termino_0;
	else if(n == 1)
		return termino_1;
	else
	{
	   for(orden = 2; orden <= n; orden++)
	   {	
	      termino_siguiente = termino_0 + termino_1;
	      termino_0 = termino_1;
	      termino_1 = termino_siguiente;
	   }	
	}
	
	return termino_siguiente;
}
