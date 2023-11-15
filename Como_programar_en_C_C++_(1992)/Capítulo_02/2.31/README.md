# 2.31 Imprimir los cuadrados y los cubos de varios números enteros.

Utilizando sólo las técnicas aprendidas en este capítulo, escriba un programa que calcule los cuadrados y los cubos de los números del 1 al 10 y que utilice  tabuladores para imprimir la siguiente tabla de valores:



		number	square	cube
		0	  		  0			  0
		1			    1  			1         
		2				4  			8
		3				9	  		27
		4				16			64
		5				25			125
		6				36			216
		7				49			343
		8				64			512
		9				81			729
		10			  100  		1000

**Código:**

```c
#include <stdio.h>
#include <stdlib.h>

main()
{
	printf("number\tsquare\tcube\n");
	printf("0\t0\t0\n");
	printf("1\t1\t1\n");
	printf("2\t%d\t%d\n", 2 * 2, 2 * 2 * 2);
	printf("3\t%d\t%d\n", 3 * 3, 3 * 3 * 3);
	printf("4\t%d\t%d\n", 4 * 4, 4 * 4 * 4);
	printf("5\t%d\t%d\n", 5 * 5, 5 * 5 * 5);
	printf("6\t%d\t%d\n", 6 * 6, 6 * 6 * 6);
	printf("7\t%d\t%d\n", 7 * 7, 7 * 7 * 7);
	printf("8\t%d\t%d\n", 8 * 8, 8 * 8 * 8);
	printf("9\t%d\t%d\n", 9 * 9, 9 * 9 * 9);
	printf("10\t%d\t%d\n", 10* 10, 10 * 10 * 10);
	
	system("PAUSE");
	return 0;
}
```
