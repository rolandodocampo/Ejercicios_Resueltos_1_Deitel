# 7.30 Misterio.

**Problema:**

Qué hace este programa?

```c
#include<stdlib.h>

int mystery3(const char *, const char *);

main()
{
	char string1[80], string2[80];

	printf("entre dos cadenas: ");
	scanf("%s%s", string1, string2);
	printf("Resultado: %d\n", test(string1, string2));
	
	system("PAUSE");
   return 0;
}

int mystery3(const char *s1, const char *s2)
{
	for(; *s1 != '\0' && *s2 != '\0'; s1++, s2++)
	
    if(*s1 != *s2)
        return 0;

	return 1;
}
```
**Solución:**

Determina si las dos cadenas de caracteres son exactamente iguales. 
