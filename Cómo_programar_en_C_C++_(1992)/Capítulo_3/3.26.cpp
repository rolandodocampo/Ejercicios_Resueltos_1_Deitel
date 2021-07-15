/*
	Author: Rolando Docampo Fernández
	Place: INEL Santiago de Cuba
	Date: 17/07/19 14:48
	Description: 3.26 Escriba un programa en C que utilice ciclo para producir la
	siguiente tabla de valores:
		A		A+2		A+4		A+6
		
		3		5			7			9
		6		8			10			12
		9		11			13			15
		12		14			16			18
		15		17			19			21
*/
#include <stdio.h>
#include <stdlib.h>

main()
{
	int contador = 3;
	
	printf("A\tA+2\tA+4\tA+6\n\n");
	while(contador <= 15)
	{
		printf("%d\t%d\t%d\t%d\n", contador, contador + 2, contador + 4,
				contador + 6);
		
		contador +=3;
	}

   system("PAUSE");
   return 0;
}

