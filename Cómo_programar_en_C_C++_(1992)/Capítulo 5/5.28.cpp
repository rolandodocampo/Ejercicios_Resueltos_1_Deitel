/*
	Author: Rolando Docampo Fernández
	Place: Casa Karenia
	Date: 23/11/19 16:16
	Description: 5.28. Escriba una función que tome un valor entero y regrese el
	número con sus dígitos invertidos. Por ejemplo, dado el número 7631, la 
	función debería regresar 1367.
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
