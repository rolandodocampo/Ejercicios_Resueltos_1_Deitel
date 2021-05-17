/*
	Author: Rolando Docampo Fern�ndez
	Place: Casa Karenia
	Date: 30/10/19 20:55
	Description: 5.10. Una aplicaci�n de la funci�n floor es redondear un valor 
	al entero m�s cercano. El enunciado y = floor(x + .5); redondear� el n�mero x
	al entero m�s cercano, y asignar� el resultado a y. Escriba un programa que 
	lea varios n�meros y que utilice el enunciado anterior para redondear cada 
	uno de estos n�meros al entero m�s cercano. Para cada n�mero procesado, 
	imprima tanto el n�mero original como el n�mero redondeado.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double y(double);

main()
{
	int centinela;
	double valor;
	
	do
	{
		printf("Introduce el numero flotante: ");
		scanf("%lf", &valor);
		printf("%.2f\t%.2f\n", (valor + .5), y(valor));
		printf("Introduce -1 para terminar u otro entero para continuar: ");
		scanf("%d", &centinela);
	}while(centinela != -1);
   system("PAUSE");
   return 0;
}

double y(double numero)
{
	return floor(numero + .5);
}
