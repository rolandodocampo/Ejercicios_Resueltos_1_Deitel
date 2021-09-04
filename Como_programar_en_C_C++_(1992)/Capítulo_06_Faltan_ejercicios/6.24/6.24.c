/*
	Author: Rolando Docampo Fern�ndez
	Place: Casa de Talita
	Date: 04/09/21 17:16
	Description: 6.24. (Recorrido del caballo). Uno de los acertijos m�s interesantes para los 
	aficionados al ajedrez, es el problema del recorrido del caballo, propuesto originalmente por el 
	matem�tico Euler. La pregunta es la siguiente: puede la pieza de ajedrez conocida como el caballo 
	moverse en el interior de un tablero de ajedrez vac�o y entrar en contacto con cada una de las 64 
	casillas, una vez y s�lo una vez?. Estudiamos aqu� este problema interesante en profundidad.
		El caballo hace movimientos en forma de L (dos en una direcci�n y a continuaci�n uno en una 
		direcci�n perpendicular). Entonces, a partir de una casilla en la mitad de un tablero de 
		ajedrez vac�o, el caballo puede efectuar ocho movimientos diferentes (numerados desde 0 hasta 
		7) tal y como se muestra en la figura 6.24.
			a) Dibuje un tablero de ajedrez de 8 por 8 en una hoja de papel e intente a mano un 
			recorrido del caballo. Coloque un 1 en la primera casilla a la cual se mueva, un 2 sobre la 
			segunda, un 3 sobre la tercera, etc�tera. Antes de iniciar el recorrido, estime qu� tan 
			lejos piensa que pueda llegar, recordando que un recorrido completo consistir�a de 64 
			movimientos. Qu� tan lejos lleg�? Se aproxim� en su estimaci�n?
			
			b) Ahora desarrollemos un programa que mueva al caballo sobre el tablero. El tablero mismo 
			se representa por un arreglo de doble sub�ndice de 8 por 8 de nombre board. Cada una de las 
			casillas se inicializa a cero. Describimos cada uno de los ocho movimientos posibles en 
			t�rminos tanto de sus componentes horizontales como verticales. Por ejemplo, un movimiento 
			del tipo 0, tal y como se muestra en la figura 6.24, consiste en mover horizontalmente dos 
			casillas a la derecha y una casilla de forma vertical hacia arriba. El movimiento 2 
			consiste en mover de manera horizontal una casilla hacia la derecha y dos casillas 
			verticalmente hacia arriba. Los movimientos horizontales a la izquierda y los movimientos 
			verticales hacia abajo se indicar�n con n�meros negativos. Los ocho movimientos pueden ser 
			descritos en dos arreglos de un solo sub�ndice, horizontal y vertical, como sigue:
					horizontal[0] = 2
					horizontal[1] = 1
					horizontal[2] = -1
					horizontal[3] = -2
					horizontal[4] = -2
					horizontal[5] = -1
					horizontal[6] = 1
					horizontal[7] = 2
					
					vertical[0] = 1
					vertical[0] = -2
					vertical[0] = -2
					vertical[0] = -1
					vertical[0] = 1
					vertical[0] = 2
					vertical[0] = 2
					vertical[0] = 1
			Hagamos las variables currentRow y currentColumn indicar el rengl�n y la columna de la 
			posici�n actual del caballo. Para hacer un movimiento del tipo moveNumber, donde moveNumber
			quede entre 0 y 7, su programa utiliza los enunciados
				currentRow += vertical[moveNumber];
				currentColumn += horizontal[moveNumber];
			Lleve un contador que var�e desde 1 hasta 64. Registre la �ltima cuenta de cada casilla 
			movida por el caballo. Recuerde en probar cada movimiento potencial, para asegurarse que el 
			caballo no haya visitado ya esa casilla. Y, naturalmente, pruebe cada movimiento potencial, 
			para asegurarse que el caballo no se ha salido del tabero de ajedrez. Ahora escriba un 
			programa para mover el caballo por el teclado. Ejecute el programa. Cu�ntos movimientos 
			hizo el caballo?
			
			c) Despu�s de intentar escribir y ejecutar un programa del recorrido del caballo, 
			probablemente usted ha desarrollado algunos conocimientos valiosos. Los utilizaremos para 
			desarrollar una heur�stica (o estrategia) para el movimiento del caballo. La heur�stica no 
			garantiza el �xito, pero una heur�stica cuidadosamente desarrollada mejora en forma 
			importante la oportunidad de �xito. Quiz�s haya observado que las casillas externas son en 
			cierta forma m�s dif�ciles que las casillas m�s cercanas al centro del tablero. De hecho, 
			las m�s dif�ciles  o inaccesibles de las casillas son las de las cuatro esquinas.
				La intuici�n le puede sugerir que deber�a intentar primero mover el caballo a las 
			casillas m�s problem�ticas, y dejar abiertas aquellas que son m�s f�ciles de llegar, a 
			fin de que conforme se vaya congestionando el tablero cerca del fin del recorrido, 
			existan mayores oportunidades de �xito.
				Pudier�mos desarrollar una "heur�stica de accesibilidad" ordenando cada una de las 
			casillas de acuerdo a su accesibilidad, y a partir de eso, moviendo siempre el 
			caballo a la casilla (dentro de los movimientos aceptados del caballo, naturalmente) 
			que sea m�s inaccesible.
				Etiquetamos un arreglo de doble sub�ndice accessibility, con n�meros que indiquen desde 
			cu�ntas casillas es accesible una casilla en particular. En un tablero en blanco o vac�o
			, las casillas centrales ser�n, por lo tanto, tasadas o valuadas como 8, las casillas de
			la esquina como 2, y las dem�s casillas tendr�n n�meros de accesibiidad de 3, 4, o 6 
			como sigue:
				
					2 3 4 4 4 4 3 2
					3 4 6 6 6 6 4 3
					4 6 8 8 8 8 6 4
					4 6 8 8 8 8 6 4
					4 6 8 8 8 8 6 4
					4 6 8 8 8 8 6 4
					3 4 6 6 6 6 4 3
					2 3 4 4 4 4 3 2
			Ahora escriba una versi�n del programa del recorrido del caballo utilizando la heur�stica 
			de accesibilidad. En todo momento, el caballo deber� moverse a la casilla que tenga el 
			n�mero de accesibilidad m�s bajo. En caso de empate, el caballo deber� moverse a cualquiera 
			de las casillas de empate. Por lo tanto, el recorrido pudiera empezar en cualquiera de las 
			cuatro esquinas (Nota: conforme el caballo se mueva por el tablero, su programa deber�a de 
			reducir los n�meros de accesibiidad conforme m�s y m�s casillas se van ocupando. De esta 
			forma, en cualquier momento dado durante e recorrido, cada n�mero de accesibillidad de as 
			casillas disponibles se  conservar� igual precisamente el n�mero de casillas que pueden ser 
			alcanzadas). Ejecute esta versi�n de su programa. Obtuvo un recorrido completo? Ahora 
			modifique el programa para ejecutar 64 recorridos, uno partiendo de cada una de las 
			casillas del tablero. Cu�ntos recorridos competos obruvo?
			
			d) Escriba una versi�n del programa del recorrido del caballo en la cual, al encontrar un 
			empate entre dos o m�s casillas, el programa decida cual casilla seleccionar mirando hacia 
			adelante cu�les son las casillas a partir de la cual el siguiente movimiento llegar�a a una 
			casilla con el n�mero de accesibilidad menor.
*/			

#include<stdio.h>
#include<stdlib.h>

main()
{

   system("PAUSE");
   return 0;
}
