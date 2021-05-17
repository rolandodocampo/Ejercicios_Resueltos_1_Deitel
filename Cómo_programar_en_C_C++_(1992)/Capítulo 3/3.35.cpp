/*
	Author: Rolando Docampo Fern�ndez
	Place: Casa de Karenia
	Date: 18/07/19 16:46
	Description: 3.35 Un pal�ndromo es un n�mero o una frase de texto, que se lee
	igual hacia adelante y hacia atr�s. Por ejemplo, cada uno de los siguientes
	enteros de cinco d�gitos son pal�ndromos: 12321, 55555, 45554 y 11611. 
	Escriba un programa que lea un entero de cinco d�gitos y que determine si es
	o no un pal�ndromo. (Sugerencia: utilice los operadores de divisi�n y de 
	m�dulo para separar los n�meros en sus d�gitos individuales).
*/
#include <stdio.h>
#include <stdlib.h>

main()
{
	int numero, numero2;
	
	printf("Escriba un numero de cinco digitos: ");
	scanf("%d", &numero);
	
	if(numero / 10000 == numero % 10)
	{
		numero2 = numero % 100 / 10;
		
		if(numero / 1000 % 10 == numero2)
			printf("Es un palindromo\n");
		else
			printf("No es un palindromo.\n");
	}
	else
		printf("No es un palindromo.\n");

   system("PAUSE");
   return 0;
}

