/*
	Author: Rolando Docampo Fern�ndez
	Place: INEL Santiago de Cuba
	Date: 11/07/19 10:17
	Description: 2.20 Escriba un programa que lea el radio de un c�rculo y que 
	imprima el di�metro del mismo, su circunferencia y su �rea. Utilice el valor 
	constante 3.14159 para "pi". Efectue cada uno de estos c�lculos dentro del 
	enunciado o enunciados printf y utilice el especificador de conversi�n %f. 
	(Nota: en este cap�tulo, hemos estudiado unicamente constantes y variables
	enteras. En el cap�tulo 3 veremos n�meros de punto flotante, es decir, 
	valores que pueden tener puntos decimales).
*/

#include <stdio.h>
#include <stdlib.h>

main()
{
	int radio;
	
	printf("Entre el radio del circulo: ");
	scanf("%d", &radio);
	
	printf("El diametro es: %d\n", 2 * radio);
	printf("La longitud de circunferencia es: %f\n", 2 * 3.14159 * radio);
	printf("El area es: %f\n", 3.14159 * radio * radio);
	
	system("PAUSE");
	return 0;
}
