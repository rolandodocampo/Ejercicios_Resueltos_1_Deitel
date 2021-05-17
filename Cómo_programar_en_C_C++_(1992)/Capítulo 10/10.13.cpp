/*
	Author: Rolando Docampo Fernández
	Place: Casa de Marcia
	Date: 13/05/20 09:30
	Description: 10.13. El operador de desplazamiento a la izquierda puede ser
	utilizado para empacar dos valores de caracteres de una variable entera no
	signada de 2 bytes. Escriba un programa que introduzca dos caracteres del 
	teclado y que los pase a la función packCharacters. Para empacar dos 
	caracteres en una variable entera unsigned, asigne el primer caracter a la 
	variable unsigned, desplace la variable a la izquierda en 8 posiciones de 
	bits, y combine la variable unsigned con el segundo carácter utilizando el 
	operador OR inclusivo a nivel de bits. El programa deberá extraer los 
	caracteres en su formato de bits, antes y después de haber sido empacados en
	el entero unsigned, para probar que los caracteres de hecho han sido 
	empacados correctamente en la variable unsigned.
*/
#include<stdio.h>
#include<stdlib.h>

unsigned packCharacters(char, char);
void displayBits(unsigned);

main()
{
	char caracter1, caracter2;
	unsigned paquete = 0;
	
	printf("Entre dos caracteres del teclado: ");
	scanf("%c%c", &caracter1, &caracter2);
	
	displayBits(paquete);
	paquete = packCharacters(caracter1, caracter2);
	displayBits(paquete);
		
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
