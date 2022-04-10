# 6.30

6.30. (La criba de Erastostenes). Un entero primo es cualquier entero que puede ser sólo dividido entre si mismo y entre 1. La criba de Erastostenes es un método para encontrar los números primos. Funciona como sigue:
		1) Instruya un arreglo con todos los elementos inicializados a 1 (verdadero). Los elementos
		del arreglo con subíndices primos se conservarán en 1. Todos los otros elementos del arreglo 
		eventualmente se quedarán en cero.
		2) Empezando con el subíndice 2 del arreglo (el subíndice 1 debe ser primo), cada vez que se
		encuentre un elemento de arreglo cuyo valor sea 1, cicle a través del resto del arreglo y 
		defina como cero cualquier elemento cuyo subíndice resulte un multiplo del subíndice 
		correspondiente al elemento con valor 1. Para el subíndice 2 del arreglo, todos los elementos
		más allá de 2 dentro del arreglo que sean múltiplos de 2, serán evaluados en cero (subíndices
		4, 6, 8, 10, etc). Para el subíndice del arreglo 3, todos los elementos más alla de 3 en el 
		arreglo que sean múltiplos de 3, serán evaluados en cero (subíndices 6, 9, 12, 15, etc).
	Cuando se haya terminado este proceso, los elementos del arreglo que aún estén definidos como 1, 
	indicarán que el subíndice es un número primo. Entonces esos subíndices pueden ser impresos. 
	Escriba un programa que utilice un arreglo de 1000 elementos para determinar e imprimir los 
	números primos entre 1 y 999. Ignore el elemento cero del arreglo.
