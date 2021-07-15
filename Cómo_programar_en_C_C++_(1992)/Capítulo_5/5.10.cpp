/*
	Author: Rolando Docampo Fernández
	Place: Casa Karenia
	Date: 30/10/19 20:55
	Description: 5.10. Una aplicación de la función floor es redondear un valor 
	al entero más cercano. El enunciado y = floor(x + .5); redondeará el número x
	al entero más cercano, y asignará el resultado a y. Escriba un programa que 
	lea varios números y que utilice el enunciado anterior para redondear cada 
	uno de estos números al entero más cercano. Para cada número procesado, 
	imprima tanto el número original como el número redondeado.
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
