/*
	Author: Rolando Docampo Fernández
	Place: Casa de Marcia 
	Date: 16/05/20 18:07
	Description: 10.17. Escriba un programa que invierta el orden de los bits de
	un valor entero no signado. El programa deberá introducir el valor 
	proveniente del usuario y llamar a la función reverseBits para imprimir los
	bits en orden inverso. Imprima el valor en bits	tanto antes como después de
	la inversión de bits, para confirmar que los bits hayan sido invertidos 
	correctamente.
*/
#include<stdio.h>
#include<stdlib.h>

void reverseBits(unsigned *);
void imprimirBits(unsigned);

main()
{
	unsigned valor;
	
	printf("Entre un valor entero no signado: ");
	scanf("%u", &valor);
	
	imprimirBits(valor);
	reverseBits(&valor);
	imprimirBits(valor);
	
    system("PAUSE");
    return 0;
}

void reverseBits(unsigned *valor)
{
	unsigned mask = 1 << (sizeof(unsigned) * 8 - 1), i, copy = *valor, temporal;
	int validacion = 0, contador = 0;
	
	*valor = 0;
	
	for(i = 1; i <= (sizeof(unsigned) * 8); i++)
	{
		temporal = copy & mask;
		copy <<= 1;
		
		if(temporal != 0)
			temporal = 1;
			
		if(temporal != 0 || validacion == 1)
		{
			if(validacion == 0)
				*valor = temporal << (sizeof(unsigned) * 8 - 1);
			else
			{
				*valor >>= 1;
				*valor |= temporal << (sizeof(unsigned) * 8 - 1);
			}
			
			validacion = 1;
			contador++;	
		}
	}
	
	for(i = 1; i <= (sizeof(unsigned) * 8) - contador; i++)
		*valor >>= 1;
}

void imprimirBits(unsigned valor)
{
	unsigned mask = 1 << (sizeof(unsigned) * 8 - 1), i;
	
	for(i = 1; i <= (sizeof(unsigned) * 8); i++)
	{
		putchar((valor & mask) == 0 ? '0' : '1');
		valor <<= 1;
		
		if(i % 8 == 0)
			putchar(' ');
	}
	putchar('\n');
}
