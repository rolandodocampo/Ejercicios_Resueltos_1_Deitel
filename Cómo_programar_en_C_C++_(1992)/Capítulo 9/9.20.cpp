/*
	Author: Rolando Docampo Fernández
	Place: Casa de Marcia
	Date: 04/05/20 14:29
	Description: 9.20. Escriba un programa que utilice el especificador de 
	conversión g para extraer el valor 9876.12345. Imprima el valor con 
	presiciones que vayan desde 1 hasta 9.
*/
#include<stdio.h>
#include<stdlib.h>

main()
{
	float valor = 9876.12345;
	int i;
	
	for(i = 1; i <= 9; i++)
		printf("%.*g\n", i, valor);
	
    system("PAUSE");
    return 0;
}
