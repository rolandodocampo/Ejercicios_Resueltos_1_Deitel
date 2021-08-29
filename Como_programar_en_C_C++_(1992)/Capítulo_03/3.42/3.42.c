/* 
	Author: Rolando Docampo Fernández
	Place: INEL Santiago de Cuba
	Date: 19/07/19 09:55
	Description: 3.42 Escriba un programa que lea el radio de un círculo (como
	valor float) y que calcule e imprima el diámetro, la circunferencia y el 
	área. Utilice para el valor de 3.14159, pi.
*/
#include <stdio.h>
#include <stdlib.h>

main()
{
	float radio, pi = 3.14159;
	
	printf("Entre el radio del circulo: ");
	scanf("%f", &radio);
	
	printf("El diametro es: %f\n", 2 * radio);
	printf("La circunferencia es: %f\n", 2 * pi * radio);
	printf("El area es: %f\n", pi * radio * radio);
	
   system("PAUSE");
   return 0;
}
