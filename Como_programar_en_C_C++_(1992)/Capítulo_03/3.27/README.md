# 3.27 Los dos números mayores de 10 números

**Problema:**

Utilizando un método similar al del ejercicio 3.26, encuentre los dos valores más grandes de los 10 números. Nota: Sólo puede introducir una vez cada número.

-----------------------------------------------------------------------------------------------------------------------------------------------------------

**Solución:**

```c
#include <stdio.h>
#include <stdlib.h>

main()
{
	int contador = 3, numero, mayor1, mayor2;
	
	printf("Entre el numero %d: ", 1);
	scanf("%d", &numero);
	mayor1 = numero;
	printf("Entre el numero %d: ", 2);
	scanf("%d", &numero);
	mayor2 = numero;
	
	if(mayor1 < mayor2)
	{
		numero = mayor1;
		mayor1 = mayor2;
		mayor2 = numero;
	}
	
	while(contador <= 10)
	{
		printf("Entre el numero %d: ", contador);
		scanf("%d", &numero);
		
		if(mayor1 < numero)
		{
			mayor2 = mayor1;	
			mayor1 = numero;
		}
		else if(mayor2 < numero)
			mayor2 = numero;
		
		++contador;
	}
	
	printf("Los dos valores mayores son: %d y %d\n", mayor1, mayor2);

   system("PAUSE");
   return 0;
}
```

**Diagrama de flujo;**

<img src=".\3.27_Diagrama_de_flujo.png"  />
