/*
	Author: Rolando Docampo Fernández
	Place: INEL Santiago de Cuba
	Date: 11/07/19 08:54
	Description: 2.16 Escriba un programa que solicite al usuario que instroduzca 
	dos números, tome los dos números del usuario e imprima la suma, el producto,
	la diferencia, el cociente y el módulo de los dos números. 	
*/

#include <stdio.h>
#include <stdlib.h>

main()
{
	int numero1, numero2;
	
	printf("Entre dos numeros enteros: ");
	scanf("%d%d", &numero1, &numero2);
	
	printf("*************************\n");
	printf("La suma es: %d\t\t*\n", numero1 + numero2);
	printf("El producto es: %d\t*\n", numero1 * numero2);
	printf("La diferencia es: %d\t*\n", numero1 - numero2);
	printf("El cociente es: %d\t*\n", numero1 / numero2);
	printf("El modulo es: %d \t*\n", numero1 % numero2);
	printf("*************************\n");
	
	system("PAUSE");
	return 0;
}
