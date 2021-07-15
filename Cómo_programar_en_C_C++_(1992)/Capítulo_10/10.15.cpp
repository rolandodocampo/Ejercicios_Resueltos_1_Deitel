/*
	Author: Rolando Docampo Fernández
	Place: Casa de Marcia
	Date: 15/05/20 09:36
	Description: 10.15. Si su sistema utiliza enteros de 4 bytes, vuelva a 
	escribir el programa de ejercicio 10.13 para empacar 4 caracteres.
*/
#include<stdio.h>
#include<stdlib.h>

unsigned packCharacters(char, char, char, char);
void displayBits(unsigned);

main()
{
	char caracter1, caracter2, caracter3, caracter4;
	unsigned paquete = 0;
	
	printf("Entre cuatro caracteres del teclado: ");
	scanf("%c%*c%c%*c%c%*c%c", &caracter1, &caracter2, &caracter3, &caracter4);
	
	displayBits(paquete);
	paquete = packCharacters(caracter1, caracter2, caracter3, caracter4);
	displayBits(paquete);
		
    system("PAUSE");
    return 0;
}

unsigned packCharacters(char caracter1, char caracter2, char caracter3, char caracter4)
{
	unsigned paquete = caracter1;
	
	paquete <<= 8;
	paquete |= caracter2;
	paquete <<= 8;
	paquete |= caracter3;
	paquete <<= 8;
	paquete |= caracter4;
	return paquete;
}

void displayBits(unsigned paquete)
{
	unsigned mask = 1 << (sizeof(unsigned) * 8 - 1);
	char i;
	
	for(i = 1; i <= (sizeof(unsigned) * 8 - 1); i++)
	{
		putchar(paquete & mask ? '1' : '0');
		paquete <<= 1;
		
		if(i % 8 == 0)
			putchar(' ');
	}
	
	putchar('\n');
}
