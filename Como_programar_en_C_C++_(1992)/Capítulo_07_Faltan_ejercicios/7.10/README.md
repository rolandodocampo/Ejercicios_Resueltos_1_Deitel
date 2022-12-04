# 7.10 Un enunciado.

**Problema:**

Para cada uno de los siguientes, escriba un solo enunciado que ejecute la tarea indicada. Suponga que han sido declaradas las variables enteras long  **value1** y **value2**, y que **value1** ha sido inicializado a 200000.

a) Declare la variable **lPtr** que sea un apuntador a un objeto del tipo long.

b) Asigne la dirección de la variable **value1** a la variable de apuntador **lPtr**.

c) Imprima el valor del objeto señalado por **lPtr**.

d) Asigne el valor del objeto señalado por **lPtr** a la variable **value2**.

e) Imprima el valor de **value2**.

f) Imprima la dirección de **value1**.

g) Imprima la dirección almacenada en **lPtr**. Es el valor impreso el mismo que el de **value1**?.

  **Solución:**

a) `long *lPtr;`

b) `lPtr = &value1;`

c) `printf("%ld\n", *lPtr);`

d) `value2 = *lPtr;`

e) `printf("%ld\n", value2);`

f) `printf("%p\n", &value1);`

g) `printf("%p\n", lPtr);`

​	 R/: Es el mismo valor impreso.
