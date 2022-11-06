# 2.24 Paridad de un número entero.

Escriba un programa que lea un entero y determine e imprima si es par o impar. (Sugerencia: utilice el operador de módulo. Un número par es un múltiplo de dos. Cualquier múltiplo de dos deja un residuo de cero al ser dividido entre dos.) 

**Código:**

```c
#include <stdio.h>
#include <stdlib.h>

main()
{
	int num;
	
    printf("Entre un entero: ");
    scanf("%d", &num);

    if(num % 2 == 0)
        printf("%d es par\n", num);

    if(num % 2 != 0)
        printf("%d es impar\n", num);

    system("PAUSE");
    return 0;
}
```
**Diagrama de flujo:**

<img src=".\2.24_Diagrama_de_flujo.png">
