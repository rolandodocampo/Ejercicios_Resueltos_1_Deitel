/*
	Author: Rolando Docampo Fernández
	Place: Casa de Marcia 
	Date: 04/05/20 12:45
	Description: 9.11. Escriba un programa que imprima el valor 100.453627 
	redondeado al dígito, décima, centécima, milésima y decenas de millar más
	cercano.
*/
#include<stdio.h>
#include<stdlib.h>

main()
{
	printf("%.1f\n", 100.453627);
	printf("%.2f\n", 100.453627);
	printf("%.3f\n", 100.453627);
	printf("%.4f\n", 100.453627);
	printf("%.5f\n", 100.453627);
	
    system("PAUSE");
    return 0;
}
