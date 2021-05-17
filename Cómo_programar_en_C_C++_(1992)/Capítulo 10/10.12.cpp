/*
	Author: Rolando Docampo Fernández
	Place: Casa de Marcia
	Date: 11/05/20 23:04
	Description: 10.12. El desplazar a la izquierda un entero unsigned en 1 bit
	es equivalente a multiplicar el valor por 2. Escriba la función power2 que 
	toma dos argumentos enteros number y pow y calcule number * 2^pow. Utilice
	el operador de desplazamiento para calcular el resultado. El programa deberá
	imprimir los valores como enteros y como bits.
*/
#include<stdio.h>
#include<stdlib.h>

int power2(unsigned *, unsigned);
void printBits(unsigned);

main()
{
	unsigned number, pow;
	
	printf("Entre dos enteros unsigned (number, pow): ");
	scanf("%u%u", &number, &pow);
	power2(&number, pow);
	printf("Los valores son:\nb10: %u\nb2: ", number);
	printBits(number);
		
    system("PAUSE");
    return 0;
}

int power2(unsigned *number, unsigned pow)
{
	static unsigned base = 2;
	
	if(pow == 0)
		return base;
		
	base <<= 1;	
	*number *= power2(&base, pow - 2);	
}

void printBits(unsigned number)
{
	unsigned mask = 1 << (sizeof(unsigned) * 8 - 1);
	char c;
	
	for(c = 1; c <= sizeof(unsigned) * 8; c++)
	{
		putchar((number & mask) == 0 ? '0' : '1');
		number <<= 1;
		
		if(c % 8 == 0)
			putchar(' ');
	}
	
	putchar('\n');
}
