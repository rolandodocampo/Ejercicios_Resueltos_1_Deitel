/* 
	Author: Rolando Docampo Fernández
	Place: Casa de Karenia
	Date: 31/08/19 10:47
	Description: 4.32 Modifique el programa que escribió en el ejercicio 4.31 
	para leer un número impar del rango 1 al 19, a fin de especificar el número
	de renglones del diamante. Su programa a continuación deberá desplegar un
	diamante del tamaño apropiado.
*/
#include <stdio.h>
#include <stdlib.h>

main()
{
	int fila, total, finast2;
	int asteriscos, finast = 1, espacios;
	
	printf("Introduzca el numero de renglones del diamante\n");
	printf("el numero debe ser impar y del 1 al 19: ");
	scanf("%d", &total);
	
	if((total >= 1 && total <= 19) && (total % 2 != 0))
	{
		for(fila = 1; fila <= ((total - 1) / 2) + 1; fila++, finast += 2)
		{
			for(espacios = fila; espacios <= (total - 1) / 2; espacios++)
				printf(" ");
		
			for(asteriscos = 1; asteriscos <= finast; asteriscos++)
				printf("*");
		
			printf("\n");
		}
	
		finast2 = finast - 4;
	
		for(fila = 1; fila <= (total - 1) / 2; fila++, finast2 -= 2)
		{
			for(espacios = 1; espacios <= fila; espacios++)
				printf(" ");
		
			for(asteriscos = 1; asteriscos <= finast2; asteriscos++)
				printf("*");
		
			printf("\n");
		}
	}
	else
		printf("Valor incorrecto\n");

   system("PAUSE");
   return 0;
}
