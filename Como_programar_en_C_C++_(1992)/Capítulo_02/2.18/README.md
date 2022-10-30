# 2.18 El mayor de dos números enteros.

**Problema:**

Escriba un programa que solicite al usuario que escriba dos enteros, tome los números del usuario y a continuación imprima el número mayor seguido por las palabras "is larger". Si los números son iguales que imprima el mensaje "These numbers are equal". Utilice solo la forma de una selección del enunciado if que aprendió en este capítulo.

**Código:**

```c
#include <stdio.h>
#include <stdlib.h>
main()
{
	int num1, num2;

	printf("Introduzca dos enteros: ");
	scanf("%d%d", &num1, &num2);

	if(num1 == num2)
		printf("These numbers are equal\n");
	
	if(num1 > num2)
		printf("%d is larger\n", num1);

	if(num1 < num2)
        printf("%d is larger\n", num2);
	
	system("PAUSE");
	return 0;
}
```
**Diagrama de flujo:**

![](.\2.18_Diagrama_de_flujo.png)
