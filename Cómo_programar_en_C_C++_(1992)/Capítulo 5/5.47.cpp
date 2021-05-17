/*
	Author: Rolando Docampo Fernández
	Place: Casa Karenia
	Date: 09/12/19 13:17
	Description: 5.47. Este ejercicio es sólo para ver que imprime.
*/
#include<stdio.h>
#include<stdlib.h>

int mistery(int, int);

main()
{
	int a, b;
	
	printf("Introduzca dos enteros: ");
	scanf("%d%d", &a, &b);
	printf("El producto de a * b: %d\n", mistery(a, b));

   system("PAUSE");
   return 0;
}

int mistery(int a, int b)
{
	if(b == 1)
		return a;
	else
		return a + mistery(a, b - 1);
}
