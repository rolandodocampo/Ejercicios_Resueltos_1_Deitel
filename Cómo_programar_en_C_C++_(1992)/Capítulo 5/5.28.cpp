/*
	Author: Rolando Docampo Fern�ndez
	Place: Casa Karenia
	Date: 23/11/19 16:16
	Description: 5.28. Escriba una funci�n que tome un valor entero y regrese el
	n�mero con sus d�gitos invertidos. Por ejemplo, dado el n�mero 7631, la 
	funci�n deber�a regresar 1367.
*/

#include<stdio.h>
#include<stdlib.h>

unsigned int invertir(unsigned int);

main()
{
	unsigned int valor;
	
	printf("Entre un numero: ");
	scanf("%u", &valor);
	printf("El valor al revez es: %u\n", invertir(valor));
	
	system("pause");
	return 0;
}

unsigned int invertir(unsigned int numero)
{
	unsigned divisor = 10, cociente = numero, residuo, 
			 valor = 0, potencia = 10;
	
	do
	{
		cociente = numero / potencia;
		potencia *= 10;
	}while(cociente != 0);
	
	potencia  /= 100;
	cociente = numero;
	
	do
	{	
		residuo = cociente % divisor;
		cociente /= divisor;
		valor += residuo * potencia;
		potencia /= 10;
	}while(cociente != 0);
	
	return valor;
}
