/*
	Author: Rolando Docampo Fernández
	Place: Casa de Marcia
	Date: 11/05/20 22:17
	Description: 10.11. Si su computadora utiliza enteros de 4 bytes, modifique
	el programa de la figura 10.7, de tal forma que funcione con enteros de 
	4 bytes.
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
	unsigned c, displayMask = 1 << 31;
	
	printf("%7u = ", value);
	
	for(c = 1; c <= 32; c++)
	{
		putchar(value & displayMask ? '1' :  '0');
		value <<= 1;
		
		if(c % 8 == 0)
			putchar(' ');
	}
	
	putchar('\n');
}
