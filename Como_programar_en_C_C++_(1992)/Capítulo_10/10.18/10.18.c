/*
	Author: Rolando Docampo Fernández
	Place: Casa de Marcia 
	Date: 16/05/20 19:16
	Description: 10.18. Modifique la función displayBits de la figura 10.7, de 
	tal forma que resulte portátil entre sistemas, utilizando enteros de 2 bytes
	y sistemas de enteros de 4 bytes. Sugerencia: utiliza el operador sizeof 
	para determinar el tamaño de un entero en una máquina en particular.
*/
#include<stdio.h>
#include<stdlib.h>

main()
{
	unsigned x;
	void displayBits(unsigned);
	
	printf("Enter an unsigned interger: ");
	scanf("%u", &x);
	displayBits(x);
	
	system("PAUSE");
	return 0;
}

void displayBits(unsigned value)
{
	unsigned c, displayMask = 1 << (sizeof(unsigned) * 8 - 1);
	
	printf("%u = ", value);
	
	for(c = 1; c <= (sizeof(unsigned) * 8); c++)
	{
		putchar(value & displayMask ? '1' : '0');
		value <<= 1;
		
		if(c % 8 == 0)
			putchar(' ');
	}
	putchar('\n');
}
