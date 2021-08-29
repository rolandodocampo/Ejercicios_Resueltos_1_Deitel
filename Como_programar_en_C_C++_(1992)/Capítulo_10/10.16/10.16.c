/*
	Author: Rolando Docampo Fernández
	Place: Casa de Marcia
	Date: 15/05/20 09:44
	Description: 10.16. Si su sistema utiliza enteros de 4 bytes, vuelva a 
	escribir la función unpackCharacters del ejercicio 10.14 para desempacar 4
	caracteres. Crear las máscaras que necesites para desempacar los 4 
	caracteres desplazando hacia la izquierda el valor 255 en la variable de 
	enmascaramiento en 8 bits 0, 1, 2 o 3 veces, (dependiendo del byte que está
	desempacando).
*/
#include<stdio.h>
#include<stdlib.h>
unsigned packCharacters(char, char, char, char);
void displayBits(unsigned);
void unpackCharacters(unsigned, char *, char *, char *, char *);

main()
{
	char caracter1, caracter2, caracter3, caracter4;
	unsigned paquete = 0;
	char letra1, letra2, letra3, letra4;
	
	printf("Entre cuatro caracteres del teclado: ");
	scanf("%c%*c%c%*c%c%*c%c", &caracter1, &caracter2, &caracter3, &caracter4);
	
	displayBits(paquete);
	paquete = packCharacters(caracter1, caracter2, caracter3, caracter4);
	displayBits(paquete);
	unpackCharacters(paquete, &letra1, &letra2, &letra3, &letra4);
	puts("************************************");
	displayBits(letra1);
	displayBits(letra2);
	displayBits(letra3);
	displayBits(letra4);
		
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

void unpackCharacters(unsigned paquete, char *letra1, char *letra2, char *letra3, char *letra4)
{
	unsigned mask = 255, resultado;
	
	resultado = paquete & mask;
	paquete >>= 8;
	*letra4 = (char)resultado;
	resultado = paquete & mask;
	paquete >>= 8;
	*letra3 = (char)resultado;
	resultado = paquete & mask;
	paquete >>= 8;
	*letra2 = (char)resultado;
	resultado = paquete & mask;
	paquete >>= 8;
	*letra1 = (char)resultado;
}
