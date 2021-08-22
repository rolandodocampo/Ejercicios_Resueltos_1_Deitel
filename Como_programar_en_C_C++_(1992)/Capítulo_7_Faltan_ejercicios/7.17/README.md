# 7.17

(Simulación la liebre y la tortuga). En este problema recreará uno de los grandes momentos de la historia, la carrera clásica entre la liebre y la tortuga. Utilizará una generación de números aleatorios para desarrollar una simulación de este evento memorable. Nuestros contendientes empiezan la carrera en el "cuadro 1" de 70 "cuadros". Cada cuadro representa una posición posible a lo largo de la carrera. La línea de meta está en el cuadro 70. El primer contendiente que llegue o pase el cuadro 70 gana una cubeta de zanahorias y lechugas frescas. El desarrollo de la pista transcurre sobre la ladera de una montaña resbalosa, por lo que ocacionalmente los corredores pierden terreno. Exciste un reloj que hace tic una vez por segundo. Con cada tic del reloj, su programa deberá ajustar la posición de los animales, de acuerdo con las reglas de la página siguiente:
Utilice variables para llevar control de las posiciones de los animales (es decir, los números de posición son del 1 al 70). Inicie cada animal en la posición 1 (es decir, en la "línea de arranque"). Si un animal resbala antes del cuadro 1, regrese al animal devuelta al cuadro 1. Genere los porcentajes de la tabla anterior mediante la producción de un entero al azar, i, en el rango 1 <= i <= 10. Para la tortuga, ejecute un "paso rápido" cuando 1 <= i <= 5, un "resbalón" cuando 6 <= i <= 7, o un "paso lento" cuando 8 <= i <= 10. Utilice una técnica similar para mover a la liebre. Empiece la carrera imprimiendo:
		

		BANG	!!!!!
		AND THEY'RE OFF	!!!!!
   |--------------------------------------------------------------------------------|	
| Animal  - Tipo de movimiento - Porcentaje del tiempo - Movimiento Real |
| ------------------------------------------------------------ |
| Tortuga  - Paso rápido		          - 50%					                - 3 cuadros a la derecha |
| - Resbalón			           - 20%	                                - 6 cuadros a la izquierda |
| - Paso lento		              - 30%					                - 1 cuadros a la derecha |
| -------------------------------------------------------------------------------- |
| Liebre    - Dormido   		              - 20%					                - Ningún movimiento |
| - Salto grande		          - 20%					                - 9 cuadros a la derecha |
| - Resbalón grande	       - 10%					                - 12 cuadros a la izquierda |
| - Salto pequeño		       - 30%					                 - 1 cuadros a la derecha |
| - Pequeño resbalón	    - 20%					                 - 2 cuadros a la izquierda |
| -------------------------------------------------------------------------------- |

Entonces, por cada pulso del reloj (es decir, por cada repetición del ciclo) imprima una línea de 70 posiciones, que mestre la letra T en la posición de la tortuga, y la letra H en la posición de la liebre. Ocacionalmente, ambos contendientes coincidirán en el mismo cuadro. En esta condición, la tortuga muerde a la liebre y su programa deberá imprimir OUCH !!! empezando en esta posición. Todas las posiciones de impresión, distintas a las de T, la H, o la OUCH !!! (en caso de un empate) deberán estar vacías. Después de que se ha impreso cada línea, pruebe si ambos animales han alcanzado o han pasado el cuadro 70. Si es así, entonces imprima el ganador y dé por terminada la simulación. Si la tortuga gana, imprima TORTOUSE WINS !!!	YAY!!!. Si la liebre gana, imprima HARE WINS. YUCH. Si ambos animales ganan en el mismo pulso de reloj, quizás desee favorecer a la tortuga (el "más débil"), o quizás desee imprimir It's a tie. Si ninguno de los animales gana, otra vez vuelva a ejecutar el ciclo, para simular el siguiente pulso de 	reloj. Cuando esté listo para ejecutar su programa, reúna un grupo de 	observadores para presenciar la carrera. !Se asombrará del interés que su auditorio mostrará!
