/* 
	Author: Rolando Docampo Fernández
	Place: INEL Santiago de Cuba
	Date: 11/07/19 15:22
	Description: 2.23 Escriba un programa que lea cinco enteros y a continuación
	determine e imprima cuales son el mayor y el menor entero en el grupo. 
	Utilice sólo las técnicas de programación que aprendió en este capítulo.
*/

#include <stdio.h>
#include <stdlib.h>

main()
{
	int num1, num2, num3, num4, num5, menor, mayor;
	
	printf("Entre cinco enteros: ");
	scanf("%d%d%d%d%d", &num1, &num2, &num3, &num4, &num5);
	menor = num1;
	mayor = num1;
	
	if(menor > num2)
	   menor = num2;
	
	if(menor > num3)
	   menor = num3;
	   
	if(menor > num4)
		menor = num4;
		
	if(menor > num5)
		menor = num5;
		
	if(mayor < num2)
	   mayor = num2;
	   
	if(mayor < num3)
	   mayor = num3;
	   
	if(mayor < num4)
	   mayor = num4;
	   
	if(mayor < num5)
	   mayor = num5;
	
	printf("%d es el mayor.\n", mayor);
	printf("%d es el menor.\n", menor);
	
	system("PAUSE");
	return 0;
}
