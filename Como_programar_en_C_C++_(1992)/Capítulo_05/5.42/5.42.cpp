/*
	Author: Rolando Docampo Fern�ndez
	Place: Casa de Karenia
	Date: 08/12/19 07:35
	Description: 5.42. El m�ximo com�n divisor de los enteros x e y es el entero
	m�s grande que divide en forma completa tanto a x como a y. Escriba una 
	funci�n recursiva gcd que regrese el m�ximo com�n divisor de x y de y. El 
	gcd de x y de y se define en forma recursiva como sigue: Si y es igual a 0, 
	entonces gcd(x, y) es x; de lo contrario gcd (de x, y) es igual a 
	gcd(y, x % y) donde % es el operador de m�dulo.
*/
#include<stdio.h>
#include<stdlib.h>

int gcd(int, int);

main()
{
	int x, y;
	
	printf("Entre dos valores enteros: ");
	scanf("%d%d", &x, &y);
	printf("El mcd: %d\n", gcd(x, y));

   system("PAUSE");
   return 0;
}

int gcd(int x, int y)
{
	if(y == 0)
		return x;
	else
		return gcd(y, x % y);
}
