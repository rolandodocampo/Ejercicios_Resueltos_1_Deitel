# 2.27 Imprimir un patrón de asteriscos.

Despliegue un patrón cuadriculado utilizando ocho enunciados printf, y a continuación despliegue el mismo patrón con el mínimo posible de enunciados printf.

		* * * * * * * *
		 * * * * * * * *
		* * * * * * * *
		 * * * * * * * *
		* * * * * * * *
		 * * * * * * * *
		* * * * * * * *
		 * * * * * * * * 

**Código:**

```c
#include <stdio.h>
#include <stdlib.h>
main()
{
	printf("* * * * * * * *\n");
	printf(" * * * * * * * *\n");
	printf("* * * * * * * *\n");
	printf(" * * * * * * * *\n");
	printf("* * * * * * * *\n");
	printf(" * * * * * * * *\n");
	printf("* * * * * * * *\n");
	printf(" * * * * * * * *\n");
	printf("----------------\n");
	printf("* * * * * * * *\n * * * * * * * *\n* * * * * * * *\n * * * * * * * *\n* * * * 		* * * *\n * * * * * * * *\n* * * * * * * *\n * * * * * * * *\n");
	
    system("PAUSE");
    return 0;
    }
```
