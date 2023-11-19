/*
	Author: Rolando Docampo Fernández
	Place: INEL Santiago de Cuba
	Date: 17/07/19 12:58
	Description: 3.23 Escriba un programa en C que utilice ciclos para imprimir
	los números del 1 al 10, lado a lado en el mismo renglón, con tres espacios
	entre cada uno de ellos.
*/
#include <stdio.h>
#include <stdlib.h>

main()
{
	int contador = 0;
	
	while(++contador <= 10)
		contador < 10 ? printf("%d   ", contador) : printf("%d\n", contador);
	
   system("PAUSE");
   return 0;
}
