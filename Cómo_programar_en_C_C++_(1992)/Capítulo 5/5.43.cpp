/*
	Author: Rolando Docampo Fernández
	Place: Casa de Karenia
	Date: 08/12/19 08:11
	Description: 5.43. ¿Es posible llamar recursivamente a main? Escriba un 
	programa que contenga una función main. Incluya la variable count de tipo
	static inicializada a 1. Postincremente e imprima el valor de count cada
	vez que main es llamada. Ejecute su programa ¿Que ocurre?
*/
#include<stdio.h>
#include<stdlib.h>

main()
{
	static int count = 1;
	
	printf("%d, ", count++);
	
	return main();
}
