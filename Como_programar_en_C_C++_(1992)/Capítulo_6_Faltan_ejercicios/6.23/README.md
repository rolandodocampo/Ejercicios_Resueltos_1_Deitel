# 6.23

(Gráficos tipo tortuga). El lenguaje Logo, que es en particular popular entre usuarios de computadoras personales, hizo famoso el concepto de los gráficos tipo tortuga. Imagine una tortuga mecánica, que camina por la habitación bajo el control de un programa de C. La tortuga sujeta una pluma en dos posiciones posibles, arriba o abajo. Cuando la pluma está abajo, la tortuga traza formas conforme se mueve; cuando la pluma está arriba, la tortuga se mueve a su antojo libremente, sin escribir nada. En este problema simularemos la operación de la tortuga y además crearemos un bloque de notas computarizado. Utilice un arreglo de 50 por 50 de nombre floor, que se inicializa a ceros. Lea los comandos partiendo de un arreglo que los contenga. Lleve el control en todo momento de la posicion actual de la tortuga, asi como si en ese momento la pluma está arriba o abajo. Suponga que la tortuga siempre empieza a partir de la posición 0,0 en el piso, con su pluma arriba. El conjunto de comandos de la tortuga que su programa debe procesar, son como sigue:
		    Comando			Significado
			1							Pluma arriba
			2							Pluma abajo
			3							Giro a la derecha
			4							Giro a la izquierda
			5,10						Moverse hacia adelante 10 espacios (o un número distinto que 10)
			6							Imprima el arreglo de 50 por 50
			7							Fin de los datos (valor centinela)
Suponga que la tortuga esta en algún lugar cerca del centro del piso. El 	siguiente "programa" dibujará e imprimirá un cuadrado de 12 por 12:
			2
			5,12
			3
			5,12
			3
			5,12
			3
			5,12
			1
			6
			7
Conforme la tortuga se mueve con la pluma abajo, defina los elementos 	apropiados del arreglo floor al valor 1. Cuando se dá el comando 6 (imprimir), siempre que exista en el arreglo un 1, despliegue un asterisco, o cualquier otro caracter que seleccione. Siempre que aparesca un 0, despliegue un espacio vacío. Escriba un programa en C para poner en operación las capacidades gráficas de la tortuga discutidas aquí. Escriba varios programas gráficos de tortuga para dibujar formas interesantes. Añada otros comandos para incrementar el poder del lenguaje gráfico de su tortuga.
