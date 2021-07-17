/*
	Author: Rolando Docampo Fernández
	Place: INEL Santiago de Cuba
	Date: 11/07/19 09:31
	Description: 2.19 Escriba un programa en C que entre tres enteros diferentes
	del teclado, y a continuación imprima la suma, el promedio, el producto, el
	más pequeño y el más grande de estos números. Utilice sólo la forma de una 
	selección del enunciado if, que usted aprendió en este capítulo. El diálogo 
	en pantalla deberá aparecer como sigue:
	
		Input three different intergers: 13 27 14
		Sum is 54
		Average is 18
		Product is 4914
		Smallest is 13
		Largest is  27
		
*/

#include <stdio.h>
#include <stdlib.h>

main()
{
	int num1, num2, num3, menor, mayor;
	
	printf("Input three different intergers: ");
	scanf("%d%d%d", &num1, &num2, &num3);
	menor = num1;
	mayor = num1;
	
	printf("Sum is %d\n", num1 + num2 + num3);
	printf("Average is %d\n", (num1 + num2 + num3) / 3);
	printf("Product is %d\n", num1 * num2 * num3);
	
	if(menor > num2)         /*Para ver cual es el menor */
		menor = num2;
	
	if(menor > num3)
		menor = num3;     	
	printf("Smallest is %d\n", menor);  /* Termina el menor aqui */
	
	if(mayor < num2)         /*Para ver cual es el mayor */
		mayor = num2;
	
	if(mayor < num3)         /*Para ver cual es el mayor */
		mayor = num3;     	
	printf("Largest is %d\n", mayor);  /* Termina el mayor aqui */
	
	system("PAUSE");
	return 0;
}
