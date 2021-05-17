/* 
	Author: Rolando Docampo Fern�ndez
	Place: Casa de Karenia 
	Date: 08/09/19 10:36
	Description: 4.37 Una cr�tica del enunciado break y del enunciado continue es
	que cada uno de ellos no es estructurado. De hecho los enunciados break y 
	continue siempre pueden ser remplazados por enunciados estructurados, aunque
	el hacerlo puede resultar un poco torpe. Describa en general c�mo eliminar�a
	cualquier enunciado break de un ciclo de programa, y lo remplazar�a con 
	alg�n equivalente estructurado. (Sugerencia: el enunciado break deja un ciclo
	desde dentro del cuerpo del ciclo). La otra forma de salir es haciendo fallar
	la prueba de continuaci�n de ciclo, una segunda prueba que indique (salida
	temprana debida a una condici�n "de salida"). Utilice la t�cnica que 
	desarroll� aqu� para eliminar el enunciado 'break' del programa de la figura
	4.11.
*/
#include <stdio.h>
#include <stdlib.h>

main()
{
	int x, y;
	
	for(x = 1; x <= 10; x++)
	{
		printf("%d ", x);
		
		if(x == 4)
		{
			y = x;
			x = 10;
		}
	}
	
	printf("\nBroke out of loop at x == %d\n", y);

   system("PAUSE");
   return 0;
}
