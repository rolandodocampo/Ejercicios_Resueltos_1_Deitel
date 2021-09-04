# 6.24

6.24. (Recorrido del caballo). Uno de los acertijos más interesantes para los aficionados al ajedrez, es el problema del recorrido del caballo, propuesto originalmente por el matemático Euler. La pregunta es la siguiente: puede la pieza de ajedrez conocida como el caballo moverse en el interior de un tablero de ajedrez vacío y entrar en contacto con cada una de las 64 casillas, una vez y sólo una vez?. Estudiamos aquí este problema interesante en profundidad.
	El caballo hace movimientos en forma de L (dos en una dirección y a continuación uno en una dirección perpendicular). Entonces, a partir de una casilla en la mitad de un tablero de ajedrez vacío, el caballo puede efectuar ocho movimientos diferentes (numerados desde 0 hasta 7) tal y como se muestra en la figura 6.24.
	a) Dibuje un tablero de ajedrez de 8 por 8 en una hoja de papel e intente a mano un recorrido del caballo. Coloque un 1 en la primera casilla a la cual se mueva, un 2 sobre la segunda, un 3 sobre la tercera, etcétera. Antes de iniciar el recorrido, estime qué tan lejos piensa que pueda llegar, recordando que un recorrido completo consistiría de 64 movimientos. Qué tan lejos llegó? Se aproximó en su estimación?

​	b) Ahora desarrollemos un programa que mueva al caballo sobre el tablero. El tablero mismo se representa por un arreglo de doble subíndice de 8 por 8 de nombre board. Cada una de las casillas se inicializa a cero. Describimos cada uno de los ocho movimientos posibles en términos tanto de sus componentes horizontales como verticales. Por ejemplo, un movimiento del tipo 0, tal y como se muestra en la figura 6.24, consiste en mover horizontalmente dos casillas a la derecha y una casilla de forma vertical hacia arriba. El movimiento 2 consiste en mover de manera horizontal una casilla hacia la derecha y dos casillas verticalmente hacia arriba. Los movimientos horizontales a la izquierda y los movimientos   		verticales hacia abajo se indicarán con números negativos. Los ocho movimientos pueden ser    		descritos en dos arreglos de un solo subíndice, horizontal y vertical, como sigue:
​    				horizontal[0] = 2
​    				horizontal[1] = 1
​    				horizontal[2] = -1
​    				horizontal[3] = -2
​    				horizontal[4] = -2
​    				horizontal[5] = -1
​    				horizontal[6] = 1
​    				horizontal[7] = 2

​					vertical[0] = 1
​    				vertical[0] = -2
​    				vertical[0] = -2
​    				vertical[0] = -1
​    				vertical[0] = 1
​    				vertical[0] = 2
​    				vertical[0] = 2
​    				vertical[0] = 1
​    		Hagamos las variables currentRow y currentColumn indicar el renglón y la columna de la    		posición actual del caballo. Para hacer un movimiento del tipo moveNumber, donde moveNumber    		quede entre 0 y 7, su programa utiliza los enunciados
​    			currentRow += vertical[moveNumber];
​    			currentColumn += horizontal[moveNumber];
​    		Lleve un contador que varíe desde 1 hasta 64. Registre la última cuenta de cada casilla     		movida por el caballo. Recuerde en probar cada movimiento potencial, para asegurarse que el     		caballo no haya visitado ya esa casilla. Y, naturalmente, pruebe cada movimiento potencial, para asegurarse que el caballo no se ha salido del tabero de ajedrez. Ahora escriba un programa para mover el caballo por el teclado. Ejecute el programa. Cuántos movimientos hizo el caballo?

​	c) Después de intentar escribir y ejecutar un programa del recorrido del caballo, probablemente usted ha desarrollado algunos conocimientos valiosos. Los utilizaremos para desarrollar una heurística (o estrategia) para el movimiento del caballo. La heurística no garantiza el éxito, pero una heurística cuidadosamente desarrollada mejora en forma importante la oportunidad de éxito. Quizás haya observado que las casillas externas son en cierta forma más difíciles que las casillas más cercanas al centro del tablero. De hecho,  	las más difíciles  o inaccesibles de las casillas son las de las cuatro esquinas. La intuición le puede sugerir que debería intentar primero mover el caballo a las casillas más problemáticas, y dejar abiertas aquellas que son más fáciles de llegar, a fin de que conforme se vaya congestionando el tablero cerca del fin del recorrido, existan mayores oportunidades de éxito. Pudierámos desarrollar una "heurística de accesibilidad" ordenando cada una de las casillas de acuerdo a su accesibilidad, y a partir de eso, moviendo siempre el caballo a la casilla (dentro de los movimientos aceptados del caballo, naturalmente) que sea más inaccesible. Etiquetamos un arreglo de doble subíndice accessibility, con números que indiquen desde   cuántas casillas es accesible una casilla en particular. En un tablero en blanco o vacío , las casillas centrales serán, por lo tanto, tasadas o valuadas como 8, las casillas de la esquina como 2, y las demás casillas tendrán números de accesibiidad de 3, 4, o 6 como sigue:
​    			
​					2 3 4 4 4 4 3 2
​    				3 4 6 6 6 6 4 3
​    				4 6 8 8 8 8 6 4
​    				4 6 8 8 8 8 6 4
​    				4 6 8 8 8 8 6 4
​    				4 6 8 8 8 8 6 4
​    				3 4 6 6 6 6 4 3
​    				2 3 4 4 4 4 3 2
​    		Ahora escriba una versión del programa del recorrido del caballo utilizando la heurística de accesibilidad. En todo momento, el caballo deberá moverse a la casilla que tenga el número de accesibilidad más bajo. En caso de empate, el caballo deberá moverse a cualquiera de las casillas de empate. Por lo tanto, el recorrido pudiera empezar en cualquiera de las cuatro esquinas (Nota: conforme el caballo se mueva por el tablero, su programa debería de reducir los números de accesibiidad conforme más y más casillas se van ocupando. De esta forma, en cualquier momento dado durante e recorrido, cada número de accesibillidad de as casillas disponibles se  conservará igual precisamente el número de casillas que pueden ser alcanzadas). Ejecute esta versión de su programa. Obtuvo un recorrido completo? Ahora   modifique el programa para ejecutar 64 recorridos, uno partiendo de cada una de las casillas del tablero. Cuántos recorridos competos obruvo?
​    		
​		d) Escriba una versión del programa del recorrido del caballo en la cual, al encontrar un empate entre dos o más casillas, el programa decida cual casilla seleccionar mirando hacia adelante cuáles son las casillas a partir de la cual el siguiente movimiento llegaría a una casilla con el número de accesibilidad menor.

![Fig_6.24](D:\Documentos\Mis_proyectos\Proyectos_informaticos\Ejercicios_Como_programar_en_C_C++\Como_programar_en_C_C++_(1992)\Capítulo_06_Faltan_ejercicios\6.24\Fig_6.24.jpg)
