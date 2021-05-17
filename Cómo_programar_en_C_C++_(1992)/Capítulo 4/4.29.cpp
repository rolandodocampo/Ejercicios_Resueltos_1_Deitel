/*
	Author: Rolando Docampo Fernández
	Place: Casa de Karenia
	Date: 30/08/19 15:12
	Description: 4.29 (Leyes de Morgan). En este capítulo, hemos analizado los 
	operadores lógicos &&, ||, !. Las leyes de Morgan a veces pueden hacer que
	sea más conveniente para nosotros expresar una expresión lógica. Estas leyes
	dicen que la expresión !(condición 1 && condición 2) es lógicamente 
	equivalente a la expresión (!condición 1 || !condición 2). También, la 
	expresión !(condición 1 || condición 2) es lógicamente equivalente a la 
	expresión (!condición 1 && !condición 2). Utilice las leyes De Morgan para
	escribir expresiones equivalentes para cada uno de los siguientes, y a 
	continuación escriba un programa para mostrar que tanto la expresión original
	como la nueva, en cada caso, son equivalente:
		a) !(x < 5) && !(y >= 7)
		b) !(a == b) || !(g != 5)
		c) !((x <= 8) && (y > 4))
		d) !((i > 4) || (j <= 6))
*/
#include <stdio.h>
#include <stdlib.h>

main()
{
	int x, y, a;
	
	printf("a) !(x < 5) && !(y >= 7) [Original]\n");
	printf("Escriba un valor de x: "); 
	scanf("%d", &x); 
	printf("Escriba un valor de y: ");
	scanf("%d", &y); 
	printf("Resultado: %d\n\n", !(x < 5) && !(y >= 7));
	printf("Ley de De Morgan\n");
	printf("a) !(x < 5 || y >= 7) [De Morgan]\n");
	printf("Resultado: %d\n\n", !(x < 5 || y >= 7));
	printf("----------------------------------------\n");
	printf("b) !(a == b) || !(g != 5) [Original]\n");
	printf("Escriba un valor de a: ");
	scanf("%d", &x);
	printf("Escriba un valor de b: ");
	scanf("%d", &y);
	printf("Escriba un valor de g: ");
	scanf("%d", &a);
	printf("Resultado: %d\n\n", !(x == y) || !(a != 5));
	printf("Ley de De Morgan\n");
	printf("b) !(a == b && g != 5) [De Morgan]\n");
	printf("Resultado: %d\n\n", !(x == y && a != 5));
	printf("----------------------------------------\n");
	printf("c) !((x <= 8) && (y > 4)) [Original]\n");
	printf("Escriba un valor de x: ");
	scanf("%d", &x);
	printf("Escriba un valor de y: ");
	scanf("%d", &y);
	printf("Resultado: %d\n\n", !((x <= 8) && (y > 4)));
	printf("Ley de De Morgan\n");
	printf("c) !(x <= 8) || !(y > 4) [De Morgan]\n");
	printf("Resultado: %d\n\n", !(x <= 8) || !(y > 4));
	printf("----------------------------------------\n");
	printf("d) !((i > 4) || (j <= 6)) [Original]\n");
	printf("Escriba un valor de i: ");
	scanf("%d", &x);
	printf("Escriba un valor de j: ");
	scanf("%d", &y);
	printf("Resultado: %d\n\n", !((x > 4) || (y <= 6)));
	printf("Ley de De Morgan\n");
	printf("d) !(i > 4) && !(j <= 6) [De Morgan]\n");
	printf("Resultado: %d\n\n", !(x > 4) && !(y <= 6));
	printf("----------------------------------------\n");

   system("PAUSE");
   return 0;
}
