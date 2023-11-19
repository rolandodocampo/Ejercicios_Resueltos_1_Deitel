# 3.22 Diferencia entre preincrementar y postdecrementar

**Problema:**

Escriba un programa en C que demuestre la diferencia entre predecrementar y postdecrementar, utilizando el operador decrementar --.

-----------------------------------------------------------------------------------------------------------------------------------------------------------

**Solución:**

```c
#include <stdio.h>
#include <stdlib.h>

main()
{
	int a = 5;
	
	printf("a   = %d\n", a);
	printf("a-- = %d\n", a--);
	printf("a   = %d\n\n", a);
	
	a = 5;
	printf("  a = %d\n", a);
	printf("--a = %d\n", --a);
	printf("  a = %d\n\n", a);
	
   system("PAUSE");
   return 0;
}
```

