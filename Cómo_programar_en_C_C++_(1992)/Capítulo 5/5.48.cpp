/*
	Author: Rolando Docampo Fernández
	Place: Casa Karenia
	Date: 09/12/19 13:24
	Description: 5.48. Una vez que haya determinado lo que hace el programa
	del ejercicio 5.47, modifiquelo para que funcione correctamente, después de 
	eliminar la restricción del segundo argumento que no sea negativo.
	
*/
#include<stdio.h>
#include<stdlib.h>

int mistery(int, int);

main()
{
	int a, b;
	
	printf("Introduzca dos enteros: ");
	scanf("%d%d", &a, &b);
	printf("El producto de %d * %d: %d\n", a, b, mistery(a, b));

   system("PAUSE");
   return 0;
}

int mistery(int a, int b)
{
	if (b == 0 || a == 0)
		return 0;
	else if(b == 1)
		return a;
	else if(b > 1)
		return a + mistery(a, b - 1);
	else if(b == -1)
		return -a;
	else
		return -a + mistery(a, b + 1);
}
