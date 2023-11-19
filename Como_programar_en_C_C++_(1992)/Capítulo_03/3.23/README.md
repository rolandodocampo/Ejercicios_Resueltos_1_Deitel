# 3.23 Imprimir los números del 1 al 10 con formato

**Problema:**

Escriba un programa en C que utilice ciclos para imprimir los números del 1 al 10, lado a lado en el mismo renglón, con tres espacios entre cada uno de ellos.

-----------------------------------------------------------------------------------------------------------------------------------------------------------

**Solución:**

```c
#include <stdio.h>
#include <stdlib.h>

main()
{
	int contador = 0;
	
	while(++contador <= 10)
		contador < 10 ? printf("%d   ", contador) : printf("%d\n", contador);
	
   system("PAUSE");
   return 0;
}
```

**Diagrama de flujo:**

<img src=".\3.23_Diagrama_de_flujo.png"  />
