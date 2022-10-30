# 2.20 Díametro, circunferencia y área de un círculo.

**Problema:**

Escriba un programa que lea el radio de un círculo y que imprima el diámetro del mismo, su circunferencia y su área. Utilice el valor constante 3.14159 para "pi". Efectue cada uno de estos cálculos dentro del enunciado o enunciados printf y utilice el especificador de conversión %f. (Nota: en este capítulo, hemos estudiado unicamente constantes y variables enteras. En el capítulo 3 veremos números de punto flotante, es decir, valores que pueden tener puntos decimales).

**Código:**

```c
#include <stdio.h>
#include <stdlib.h>
main()
{
	int radio;
	
    printf("Entre el radio del circulo: ");
    scanf("%d", &radio);
    printf("El diametro es: %d\n", 2 * radio);
    printf("La longitud de circunferencia es: %f\n", 2 * 3.14159 * radio);
    printf("El area es: %f\n", 3.14159 * radio * radio);

    system("PAUSE");
    return 0;
}
```
**Diagrama de flujo:**

<img src=".\2.20_Diagrama_de_flujo.png"  />

