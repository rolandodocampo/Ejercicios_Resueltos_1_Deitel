/*
	Author: Rolando Docampo Fern�ndez
	Place: INEL Santiago de Cuba
	Date: 19/07/19 09:46
	Description: 3.41 Escriba un programa que contin�e imprimiendo m�ltiplos del
	entero 2, es decir, 2, 4, 8, 16, 32, 64, etc. Su ciclo no deber� de terminar
	(es decir, usted debe de crear un ciclo infinito). �Qu� ocurre cuando ejecuta
	ese programa?.
*/
#include <stdio.h>
#include <stdlib.h>

main()
{
	int numero = 2;
	
	while(1)
	{
		numero *= 2;
		printf("%d\n", numero);
	}

   system("PAUSE");
   return 0;
}

/* El resultado, despu�s de unos cuantos ciclajes es !cero! */
