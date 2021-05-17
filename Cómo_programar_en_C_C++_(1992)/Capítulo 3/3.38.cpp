/* 
	Author: Rolando Docampo Fernández
	Place: INEL Santiago de Cuba
	Date: 19/07/19 09:12
	Description: 3.38 Escriba un programa que imprima 100 asteriscos, uno por 
	uno. Después de cada décimo asterisco, su programa deberá imprimir un 
	carácter de nueva linea. (Sugerenica: cuente de 1 a 100. Utilice un operador
	de módulo para reconocer cada vez que el contador llegue a un múltiplo de 
	10).
*/
#include <stdio.h>
#include <stdlib.h>

main()
{
	int contador = 0;
	
	while(++contador <= 100)
		contador % 10 == 0 ? printf("\n") : printf("*");


   system("PAUSE");
   return 0;
}
