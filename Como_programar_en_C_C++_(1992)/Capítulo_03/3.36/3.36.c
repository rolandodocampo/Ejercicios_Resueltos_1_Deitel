/*
	Author: Rolando Docampo Fern�ndez
	Place: INEL Santiago de Cuba
	Date: 19/07/19 07:43
	Description: 3.36 Introduzca un entero que contenga s�lo 0s y 1s ( es decir,
	un entero "Binario") e imprimia su equivalente decimal. (Sugerencia: utilice
	los operadores de m�dulo y de divisi�n para detectar los d�gitos del n�mero
	"binario" uno por uno, de derecha a izquierda. Al igual que en el sistema
	num�rico decimal, donde el d�gito m�s a la derecha tiene un valor posicional
	de 1, y el siguiente d�gito a la izquierda tiene un valor posicional de 10, y
	a continuaci�n un valor posicional de 10, y a continuaci�n de 100, y a 
	continuaci�n de 1000, etc, en un sistema num�rico binario, el d�gito m�s a la 
	derecha tiene un valor posicional de 1, el siguiente d�gito a la derecha 
	tiene un valor posicional de 2, y a continuaci�n de 4, y a continuaci�n de 8,
	etc. Por lo tanto el n�mero decimal 234 puede ser interpretado como 
	4*1+3*10+2*100. El equivalente decimal del n�mero 1101 binario es
	1*1+0*2+1*4+1*8 o bien, 1+0+4+8, es decir 13).
*/
#include <stdio.h>
#include <stdlib.h>

main()
{
	int entero_binario, decimal = 0, valor_posicional = 1;
	
	printf("Entre el numero binario: "); 		/* 1101 */
	scanf("%d", &entero_binario);
	
	printf("El decimal de %d es: ", entero_binario);
	
	if(entero_binario == 0)
		decimal = 0;
	else if(entero_binario == 1)
		decimal = 1;
	else		
	{
		while(entero_binario != 0)
		{
			decimal += entero_binario % 10 * valor_posicional;
			
			valor_posicional *= 2;
			entero_binario /= 10;
		}
	}
	
	printf("%d\n", decimal);

   system("PAUSE");
   return 0;
}
