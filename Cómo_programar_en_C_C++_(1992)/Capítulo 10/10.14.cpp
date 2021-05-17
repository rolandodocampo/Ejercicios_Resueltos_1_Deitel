/*
	Author: Rolando Docampo Fernández
	Place: Casa de Marcia
	Date: 13/05/20 23:58
	Description: 10.14. Utilizando el operador de desplazamiento a la derecha, 
	el operador AND a nivel de bits y una máscara, escriba la función 
	unpackCharacters que toma el entero unsigned del ejercicio 10.13 y lo 
	desempaca en dos caracteres. Para desempacar dos caracteres de un entero 
	unsigned de 2 bytes, combine el entero unsigned con la máscara 65280 
	(11111111 00000000) y desplaze hacia la derecha el resultado en 8 bits.
	Asigne el valor resultante a una variable char. A continuación combine el 
	entero unsigned con la máscara 255 (00000000 11111111). Asigne el resultado
	en otra variable char. El programa deberá imprimir el entero unsigned en 
	bits, antes de ser desempacado, y a continuación imprimir los caracteres en 
	bits para confirmar que fueron empacados correctamente.
*/
#include<stdio.h>
#include<stdlib.h>
unsigned packCharacters(char, char);
void displayBits(unsigned);
void unpackCharacters(unsigned, char *, char *);

main()
{
	char caracter1, caracter2;
	unsigned paquete = 0;
	char letra1, letra2;
	
	printf("Entre dos caracteres del teclado: ");
	scanf("%c%*c%c", &caracter1, &caracter2);
	
	displayBits(paquete);
	paquete = packCharacters(caracter1, caracter2);
	displayBits(paquete);
	unpackCharacters(paquete, &letra1, &letra2);
	puts("************************************");
	displayBits(letra1);
	displayBits(letra2);
		
    system("PAUSE");
    return 0;
}

unsigned packCharacters(char caracter1, char caracter2)
{
	unsigned paquete = caracter1;
	
	paquete <<= 8;
	paquete |= caracter2;
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

void unpackCharacters(unsigned paquete, char *letra1, char *letra2)
{
	unsigned mask = 65280, mask2 = 255, resultado;
	
	resultado = paquete & mask;
	resultado >>= 8;
	*letra1 = (char)resultado;
	resultado = paquete & mask2;
	*letra2 = (char)resultado;
}
