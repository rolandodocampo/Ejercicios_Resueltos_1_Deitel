/*
	Author: Rolando Docampo Fern�ndez
	Place: INEL Santiago de Cuba
	Date: 19/07/19 08:17
	Description: 3.37 De forma continua escuchamos decir que las computadoras son
	muy r�pidas. �C�mo puede usted determinar la verdadera velocidad de operaci�n
	de su m�quina? Escriba un programa con un ciclo while que cuente de 1 hasta
	3000000 de uno en uno. Cada vez que el contador llegue a un m�ltiplo de 
	1000000, imprima este n�mero en la pantalla. Utilice su reloj para medir
	cuanto tiempo tarda cada repetici�n de 1000000 del ciclo.
*/
#include <stdio.h>
#include <stdlib.h>

main()
{
	int contador = 0;
	
	while(++contador <= 3000000)
	{
		if(contador % 1000000 == 0)
			printf("%d\n", contador);
	}

   system("PAUSE");
   return 0;
}
