# 2.29 Imprimir los equivalentes en enteros de algunas letras.

He aquí una mirada hacia adelante. En este capítulo usted aprendió los enteros y el tipo int. C también puede representar letras mayúsculas, letras minúsculas y una gran variedad de símbolos especiales. C utiliza enteros pequeños en forma interna para representar cada caracter diferente. El conjunto de caracteres que utiliza una computadora y las representaciones de entero correspondientes para estos caracteres se conoce como el conjunto de caracteres de la computadora. Por ejemplo, usted puede imprimir el equivalente en enteros de la A, ejecutando el enunciado: 

​		printf("%d", 'A');

Escriba un programa C que imprima los equivalentes en entero de algunas letras mayúsculas, letras minúsculas, dígitos y símbolos especiales. Como mínimo, determine los equivalentes en entero de los siguientes: A B C a b c 0 1 2 $ * + / así como del caracter de espacio en blanco.

**Código:**

```c
#include <stdio.h>
#include <stdlib.h>

main()
{
	printf("A -> %d\n", 'A');
	printf("B -> %d\n", 'B');
	printf("C -> %d\n", 'C');
	printf("a -> %d\n", 'a');
	printf("b -> %d\n", 'b');
	printf("c -> %d\n", 'c');
	printf("0 -> %d\n", '0');
	printf("1 -> %d\n", '1');
	printf("2 -> %d\n", '2');
	printf("$ -> %d\n", '$');
	printf("* -> %d\n", '*');
	printf("+ -> %d\n", '+');
	printf("/ -> %d\n", '/');
	printf("  -> %d\n", ' ');

    system("PAUSE");
    return 0;
}
```
