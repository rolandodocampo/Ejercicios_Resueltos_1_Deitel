/* 
	Author: Rolando Docampo Fernández
	Place: Casa Karenia
	Date: 22/11/19 17:18
	Description: 5.22. Escriba segmentos de programas que lleven a cabo cada uno
	de ellos lo siguiente:
	a) Calcule la parte entera del cociente cuando el entero a se divide por el
	entero b.
	b) Calcule el residuo entero cuando el entero a es divido por el entero b.
	c) Utilice las porciones de programas desarrolladas en a) y en b) para 
	escribir una función que introduzca un entero entre 1 y 32767 y lo imprima 
	como una serie de dígitos, estando separado cada par de dígitos por dos 
	espacios. Por ejemplo el entero 4562 deberá ser impreso como: 4  5  6  2. 
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int inciso_a(int, int);
int inciso_b(int, int);
void inciso_c(int);

main()
{
	int a, b, numero;
	
	srand(time(NULL));
	printf("Pruebe primero el inciso a), entre dos entero: ");
	scanf("%d%d", &a, &b);
	printf("El valor del inciso a) = %d\n", inciso_a(a, b));
	printf("Pruebe ahora el inciso b), entre dos entero: ");
	scanf("%d%d", &a, &b);
	printf("El valor del inciso b) = %d\n", inciso_b(a, b));
	numero = 1 + rand();
	printf("Numero es: %d\n", numero);
	inciso_c(numero);
	
	
	
	system("PAUSE");
	return 0;
}

int inciso_a(int a, int b)
{
	int cociente_entero;
	
	cociente_entero = a / b;
	
	return cociente_entero;
}

int inciso_b(int a, int b)
{
	int residuo_entero;
	
	residuo_entero = a % b;
	
	return residuo_entero;
}

void inciso_c(int numero)
{
	int base, cociente, residuo;
	
	residuo = numero;
	for(base = 10000; base >= 1; base /= 10)
	{
		cociente = inciso_a(residuo, base);
		residuo = inciso_b (residuo, base);
		
		if(cociente == 0 && base >= 10)
			printf("%d  ", cociente);
		else if(cociente != 0 )
			printf("%d  ", cociente);
	}
	printf("\n");
}
