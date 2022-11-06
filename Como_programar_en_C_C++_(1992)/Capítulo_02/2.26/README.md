# 2.26 Múltiplos de dos enteros.

Escriba un programa que lea dos enteros y que determine e imprima si el primero es un múltiplo del segundo . (Sugerencia: utilice el operador de módulo).

**Código:**

```c
#include <stdio.h>
#include <stdlib.h>

main()
{
	int num1, num2;
	
    printf("Entre dos enteros: ");
    scanf("%d%d", &num1, &num2);

    if(num1 % num2 == 0)
        printf("%d es multiplo de %d.\n", num1, num2);

    if(num1 % num2 != 0)
        printf("%d no es multiplo de %d.\n", num1, num2);

    system("PAUSE");
    return 0;
}
```
**Diagrama de flujo:**

<img src=".\2.26_Diagrama_de_flujo.png">
