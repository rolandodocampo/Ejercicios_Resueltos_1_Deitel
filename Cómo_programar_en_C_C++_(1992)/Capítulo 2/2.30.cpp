/* 
	Author: Rolando Docampo Fern�ndez
	Place: INEL Santiago de Cuba
	Date: 15/07/19 08:26
	Description: 2.30 Escriba un programa que entre un n�mero de cinco d�gitos,
	separe el n�mero en sus d�gitos individuales e imprima los d�gitos separados
	unos de otros mediante tres espacios. Por ejemplo, si el usuario escribe 
	42339 el programa deber� imprimir: 4 2 3 3 9	
*/

#include <stdio.h>
#include <stdlib.h>

main()
{
   int num, resto;
   
   printf("Entre un numero de cinco digitos: ");
   scanf("%d", &num);
   
	printf("------------------------------------\n");
   printf("%d   ", num / 10000);
   resto = num % 10000;
   printf("%d   ", resto / 1000);
   resto = resto % 1000;
   printf("%d   ", resto / 100);
   resto = resto % 100;
   printf("%d   ", resto / 10);
   resto = resto % 10;
   printf("%d\n", resto);
 	
	system("PAUSE");
	return 0;  
}
