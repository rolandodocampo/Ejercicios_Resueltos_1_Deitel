/*
	Author: Rolando Docampo Fernández
	Place: INEL Santiago de Cuba
	Date: 19/07/19 08:17
	Description: 3.37 De forma continua escuchamos decir que las computadoras son
	muy rápidas. ¿Cómo puede usted determinar la verdadera velocidad de operación
	de su máquina? Escriba un programa con un ciclo while que cuente de 1 hasta
	3000000 de uno en uno. Cada vez que el contador llegue a un múltiplo de 
	1000000, imprima este número en la pantalla. Utilice su reloj para medir
	cuanto tiempo tarda cada repetición de 1000000 del ciclo.
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
