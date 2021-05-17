/*
	Author: Rolando Docampo Fernández
	Place: INEL Santiago de Cuba
	Date: 22/07/19 08:20
	Description: 3.47 El factorial de un entero no negativo n se escribe como n!
	(se dice "factorial de n") y se define como sigue:
		n! = n * (n-1) * (n-2) *...* 1 (para valores mayores que o igual a 1)
	y n! = 1 (para n = 0). Por ejemplo, 5! = 5 * 4 * 3 * 2 * 1, lo que significa
	120.
		a) Escriba un programa que lea un entero no negativo, y que calcule e 
		imprima su factorial.
		b) Escriba un programa que estime el valor de la constante matemática e,
		utilizando la fórmula
				e = 1 + 1 / 1! + 1 / 2! + 1 / 3! +...
		c) Escriba un programa que calcule el valor de e^x utilizando la fórmula,
				e^x = 1 + x/1! + x^2/2! + x^3/3! +...
*/
#include <stdio.h>
#include <stdlib.h>

main()
{
	int entero, factorial = 1, contador = -1, num, operaciones, elevado = 1;
	float e = 1;
	
	printf("Entre un entero no negativo: ");
	scanf("%d", &entero);
	
	/* a) */
	if(entero > 0)	
	{
		while(++contador <= entero - 1)
			factorial *= entero - contador;
		
		printf("%d! = %d\n", entero, factorial);
	}
	else if(entero == 0)
		printf("%d! = 1\n");
	else
		printf("Error, el entero es negativo\n");
	
	printf("---------------------\n");
	
	/* b) */
	factorial = 1;
	contador = -1;
	operaciones = 0;
	
	printf("Entre el numero de operaciones: ");
	scanf("%d", &num);
	
	while(++operaciones <= num)
	{
		while(++contador <= operaciones - 1)
			factorial *= operaciones - contador;
		
		e += 1 / (float)factorial;
		contador = -1;
		factorial = 1;
	}
	
	printf("e = %f.\n", e);
	printf("----------------------\n");

	/* c) */
	contador = -1;
	factorial = 1;
	e = 1;
	operaciones = 0;
	
	printf("Entre la potencia e^x: ");
	scanf("%d", &num);
	
	while(++operaciones <= 10)
	{
		while(++contador <= operaciones - 1)
			factorial *= operaciones - contador;
		
		elevado *= num; 
		e += elevado / (float)factorial;
		contador = -1;
		factorial = 1;
	}
	
	printf("e^x = %f.\n", e);
	
   system("PAUSE");
   return 0;
}
