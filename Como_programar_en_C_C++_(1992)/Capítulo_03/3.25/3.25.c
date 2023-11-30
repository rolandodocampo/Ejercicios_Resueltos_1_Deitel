                                                                                                                                                                 /*
	Author: Rolando Docampo Fernández
	Place: INEL Santiago de Cuba
	Date: 17/07/19 13:28
	Description: 3.25 Escriba un programa en C, que utilice ciclos para imprimir
	la siguiente tabla de valores:
		N		10*N		100*N		1000*N
		
		1		10			100		1000
		2		20			200		2000
		3		30			300		3000
		4		40			400		4000
		5		50			500		5000
		6		60			600		6000
		7		70			700		7000
		8		80			800		8000
		9		90			900		9000
		10		100		1000		10000
	el caracter de tabulador, \t, puede ser utilizado en un enunciado printf para
	separar las columnas mediante tabuladores.
*/
#include <stdio.h>
#include <stdlib.h>

main()
{
	int contador = 0;
	
	printf("N\t10*N\t100*N\t1000*N\n\n");
	while(++contador <= 10)
		printf("%d\t%d\t%d\t%d\n", contador, contador * 10, contador * 100, contador * 1000);

   system("PAUSE");
   return 0;
}
