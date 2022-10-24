/*
	Author: Rolando Docampo Fernandez
	Place: Casa de Talita Pianta
	Date: 12/10/22 20:11
	Description: 5.13 Escriba enunciados que asignen números enteros aleatorios a la 
	variable n en los rangos siguientes:
		a) 1 <= n <= 2
		b) 1 <= n <= 100
		c) 0 <= n <= 9
		d) 1000 <= n <= 1112
		e) -1 <= n <= 1
		f) -3 <= n <= 11                                 
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	short n, i;
	
	srand(time(NULL));
	
	for(i = 0; i <= 10; i++) /* a) 1 <= n <= 2 */
	{
		n = rand() % 2 + 1;
		printf("%5hd ", n);
	}
	putchar('\n');
	/*-------------------------------------------*/
	for(i = 0; i <= 10; i++) /* b) 1 <= n <= 100 */
	{
		n = rand() % 100 + 1;
		printf("%5hd ", n);
	}
	putchar('\n');
	/*-------------------------------------------*/
	for(i = 0; i <= 10; i++) /* c) 0 <= n <= 9 */
	{
		n = rand() % 10;
		printf("%5hd ", n);
	}
	putchar('\n');
	/*-------------------------------------------*/
	for(i = 0; i <= 10; i++) /* d) 1000 <= n <= 1112 */
	{
		n = rand() % 113 + 1000;
		printf("%5hd ", n);
	}
	putchar('\n');
	/*-------------------------------------------*/
	for(i = 0; i <= 10; i++) /* e) -1 <= n <= 1 */
	{
		n = rand() % 3 - 1;
		printf("%5hd ", n);
	}
	putchar('\n');
	/*-------------------------------------------*/
	for(i = 0; i <= 10; i++) /* f) -3 <= n <= 11 */
	{
		n = rand() % 15 - 3;
		printf("%5hd ", n);
	}
	putchar('\n');
	
   system("PAUSE");
   return 0;
}
