/* 
	Author: Rolando Docampo Fernández
	Place: INEL Santiago de Cuba
	Date: 15/07/19 08:26
	Description: 2.30 Escriba un programa que entre un número de cinco dígitos,
	separe el número en sus dígitos individuales e imprima los dígitos separados
	unos de otros mediante tres espacios. Por ejemplo, si el usuario escribe 
	42339 el programa deberá imprimir: 4 2 3 3 9	
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
