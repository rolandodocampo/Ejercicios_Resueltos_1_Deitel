# 3.25 Imprimir tabla

**Problema:**

Escriba un programa en C, que utilice ciclos para imprimir la siguiente tabla de valores:

​     		N		    10*N		        100*N		    1000*N	

		1		10			100		1000
		2		20			200		2000
		3		30			300		3000
		4		40			400		4000
		5		50			500		5000
		6		60			600		6000
		7		70			700		7000
		8		80			800		8000
		9		90			900		9000
		10		100		1000		10000
	el caracter de tabulador, \t, puede ser utilizado en un enunciado printf para separar las columnas mediante tabuladores.

-----------------------------------------------------------------------------------------------------------------------------------------------------------

**Solución:**

```c
#include <stdio.h>
#include <stdlib.h>

main()
{
	int contador = 0;
	
	printf("N\tN*10\tN*100\tN*1000\n\n");
	while(++contador <= 10)
		printf("%d\t%d\t%d\t%d\n", contador, contador * 10, contador * 100, contador * 1000);

   system("PAUSE");
   return 0;
}
```

**Diafragma de flujo:**

<img src=".\3.25_Diagrama_de_flujo.png"  />
