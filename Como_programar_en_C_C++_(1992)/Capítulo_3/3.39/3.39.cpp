/*
	Author: Rolando Docampo Fernández
	Place: INEL Santiago de Cuba
	Date: 19/07/19 09:24
	Description: 3.39 Escribe un programa que lea un entero, y determine e 
	imprima cuántos dígitos de ese entero son 7s.
*/
#include <stdio.h>
#include <stdlib.h>						

main()
{
	int numero, conteo = 0;
	
	printf("Escribe un entero: ");
	scanf("%d", &numero);
	
	while(numero != 0)
	{
		if(numero % 10 == 7)
			++conteo;
		
		numero /= 10;		
	}
	
	printf("El numero de 7s es: %d\n", conteo);

   system("PAUSE");
   return 0;
}
