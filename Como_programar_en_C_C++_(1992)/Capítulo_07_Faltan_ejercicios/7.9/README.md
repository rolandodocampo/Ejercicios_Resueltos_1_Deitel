# 7.9 Contestas.

**Problema:**

Conteste cada uno de los siguientes. Suponga que enteros unsigned están almacenados en 2 bytes, y que la dirección inicial del arreglo es en la posición 1002500 en memoria.

a) Declare un arreglo del tipo unsigned int llamado **values** con 5 elementos, e inicie los elementos a los enteros pares del 2 al 10. Suponga la constante simbólica SIZE definida como 5.

b) Declare un apuntador **vPtr** que señale a un objeto del tipo unsigned int.

c) Imprima los elementos del arreglo **values** utilizando notación de subíndices de arreglo. Utilice una estructura for y suponga que ha sido declarada una variable de control entera i.

d) Proporcione dos enunciados separados que asignen la dirección inicial del arreglo **values** a la variable de apuntador **vPtr**.

e) Imprima los elementos del arreglo **values**, utilizando notación apuntador / desplazamiento.

f) Imprima los elementos del arreglo **values**, utilizando notación apuntador / desplazamiento con el nombre del arreglo como apuntador.

g) Imprima los elementos del arreglo **values**, mediante subíndices del apuntador al arreglo. 

h) Refiérase al elemento 5 del arreglo **values** utilizando notación de subíndice de arreglo, notación de apuntador/desplazamiento con el nombre del arreglo como el apuntador,  notación de subíndice de apuntador, y notación de apuntador / desplazamiento.

i) Cuál es la dirección referenciada por `vPtr + 3`?, Cuál es el valor almacenado en esa posición?.

j) Suponiendo que vPtr apunta a **values[4]**, cuál es la dirección referenciada por vPtr -= 4. Cuál es el valor almacenado en esa posición?.



**Solución:**

a) `unsigned values[SIZE] = {2, 4, 6, 8, 10};`

b) `unsigned *vPtr;`

c)

```c
for(i = 0; i <= SIZE - 1; i++)
	printf("%u ", values[i]);
	
putchar('\n');
```

d) `vPtr = &values[0];` 

​	 `vPtr = values;`

e) 

```c
for(i = 0; i <= SIZE - 1; i++)
	printf("%u ", *(vPtr + i));
	
putchar('\n');
```

f) 

```c
for(i = 0; i <= SIZE - 1; i++)
	printf("%u ", *(values + i));
	
putchar('\n');
```

g) 

```c
for(i = 0; i <= SIZE - 1; i++)
	printf("%u ", vPtr[i]);
	
putchar('\n');
```

h) `values[4];`

​	`*(values + 4);`

​	`vPtr[4];`

​	`*(vPtr + 4);`

i) **Dirección:** 1.002.506

​	**Valor:** 8

j) **Dirección:** 1002500

​	**Valor:** 2
