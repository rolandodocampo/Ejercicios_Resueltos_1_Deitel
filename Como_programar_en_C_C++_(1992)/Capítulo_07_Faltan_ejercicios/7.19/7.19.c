/*
	Author: Rolando Docampo Fernández
	Place: Casa de Marcia
	Date: 21/04/22 18:36
	Description: 7.19. (Un simulador de computadora). Al principio pudiera resutar extravagante, pero
	en este problema construirá su propia computadora. No, no tendrá que soldar componentes. Más 
	bien, utilizará la técnica poderosa de la simulación baseada en software para crear un modelo en
	software de Simpletron. No quedará decepcionado. Su simuladora Simpletron convertirá la 
	computadora que está utilizando en una Simpletron, y de hecho será capaz de ejecutar, probar y 
	depurar los programas LMS que escribió en el ejercicio 7.18. Cuando haga funcionar su simuladora
	Simpletron, deberá empezar imprimiendo:
		*** Welcom to Simpletron ***
		
		*** Pleas enter your program one inatruction  ***
		*** (or data word) at a time. I will type the ***
		*** location number and a question mark (?).  ***
		*** You then type the word for that location  ***
		*** Type the sentinel -99999 to stop entering ***
		*** your program. ***
		Simule la memoria de Simpletron con un arreglo memory de un subíndice, que tenga 100 
	elementos. Ahora suponga que el simulador está funcionando, y examinemos el diálogo, conforme
	introducimos el programa del ejemplo 2 del ejercicio 7.18:
			00 ? +1009
			01 ? +1010
			02 ? +2009
			03 ? +3110
			01 ? +4107
			01 ? +1109
			01 ? +4300
			01 ? +1110
			01 ? +4300
			01 ? +0000
			01 ? +0000
			01 ? -99999
			*** Program loading completed ***
			*** Program execution begins  ***
	Ahora el programa LMS ha sido colocado (es decir cargado) en el arreglo memory. A continuación
	Simpletron ejecutará su programa LMS. La ejecución empieza con la instrucción en la posición 00,
	y, al igual que C, continuará en forma secuencial, a menos de que sea dirigido a otra parte del 
	programa, mediante una transferencia de control.
		Utilice la variable accumulator, para representar el registro de acumulador. Utilice la 
	variable instructionCounter, para llevar control de la posición en memoria que contiene la 
	instrucción bajo ejecución. Utilice la variable operationCode, para indicar la operación en este
	momento en ejecución, es decir los dos dígitos a la izquierda de la palabra de instrucción. 
	Utilice la variable operand, para indicar la posición en memoria en la cual opera la instrucción
	actual. Entonces, operand son los dígitos más a la derecha de la instrucción en ejecución en ese
	momento. No ejecute las instrucciones desde la memoria directa. Más bien transfiera la siguiente
	instrucción a ejecutarse de la memoria a una variable llamada, instructionRegister. A 
	continuación "tome" los dos dígitos a la izquierda y colóquelos en operationCode, y luego "tome"
	los dos dígitos a la derecha y colóquelos en operand.
		Cuando Simpletron empieza a operar, los registros especiales son inicializados como sigue:
			accumulator				  +00
			instructionCounter	   00
			instructionRegister	+0000
			operationCode				00
			operand						00
		Ahora "recorramos" la ejecución de la primera instrucción LMS, +1009 en la posición de memoria
	00. Esto se conoce como un ciclo de ejecución de instrucción. El instructionCounter nos indica
	la posición de la siguiente instrucción a ejecutarse. Tomamos el contenido de esa posición 
	memory, utilizando el enunciado en C
	 	instructionRegister = memory[instructionCounter];
	El código de operación y el operando se extraen del registro de instrucción mediante los 
	enunciados: 
			operationCode = instructionRegister / 100;
			operand = instructionRegister % 100;
	Ahora Simpletron debe determinar que el código de operación es de hecho un read (a diferencia de 
	un write, un load, etc). Con un switch se diferencia entre las doce operaciones de LMS. En la 
	estructura switch, el comportamiento de las varias instrucciones LMS se simula como sigue 
	(dejamos las demás al lector):
			read: scanf("%d", &memory[operand]);
			load: accumulator = memory[operand];
			add: accumulator += memory[operand];
			Varias instrucciones de ramificación: analizaremos pronto.
			halt: Esta instrucción imprime el mensaje
				*** Simpletron execution terminated ***
	y a continuación el nombre y el contenido de cada registro, así como el contenido completo de la 
	memoria. Una impresión como esta, con frecuencia se conoce como un vaciado de computadora (y, no,
	un vaciado de computadora no es un lugar donde va la computadora vieja). Para auxiliarle a 
	programar su función de vaciado, en la figura 7.32 se muestra un formato de muestra de vaciado.
	Note que después de ejecutar un programa Simpletron un vaciado mostraría los valores reales de 
	las  instrucciones y los valores de datos, en el momento en que la ejecución terminó.
		Sigamos con la ejecución de la primera instrucción de su programa, es decir, +1009 en la 
	posición 00. Como hemos indicado, el enunciado switch simula lo anterior, ejecutando en C el 
	enunciado: scanf("%d", &memory[operand]);
		Antes de que se ejecute scanf, deberá aparecer un signo de interrogación (?) en pantalla, para
	solicitarle entradas al usuario. Simpletron espera a que el usuario escriba un valor y a 
	continuación presione la tecla return. El valor a continuación se lee a la posición 09.
		Llegado a ese punto, la simulación de la primera instrucción ha sido terminada. Todo lo que se
	requiere es preparar Simpletron para que ejecute la siguiente instrucción. Dado que la 
	instrucción que se acaba de terminar no fue una transferencia de control, simplemente necesitamos
	incrementar el registro de contador de instrucciones, como sigue:	++instructionCounter;
	Esto completa la ejecución simulada de la primera instrucción. Empieza otra vez todo el proceso,
	(es decir, el ciclo de ejecución de instrucción), con la obtención de la siguiente instrucción
	a ejecutarse. Ahora veamos como se simulan las instrucciones de ramificación - las transferencias
	de control. Todo lo que necesitamos hacer es ajustar en forma apropiada el valor del contador de 
	instrucciones. Por lo tanto, la instrucción de ramificación incondicional (40) se simula dentro 
	de switch como:
			instructionCounter = operand;
	La instrucción condicional "ramifique si el acumulador es cero" se simula como:
			if(accumulator == 0)
				instructionCounter = operand;
	Llegado a este punto debería poner en marcha su simulador Simpletron y ejecutar cada uno de los 
	programas LMS escritos en el ejercicio 7.18. Puede embellecer a LMS con características 
	adicionales e incluirlas en su simulador.
	Su simulador deberá verificar varios tipos de errores. Durante la fase de carga del programa, por
	ejemplo, cada número que escriba el usuario en memory del Simpletron debe estar en el rango de 
	-9999 hasta +9999. Su simulador deberá utilizar un ciclo while y probar que cada uno de los 
	números escritos estén en este rango y, de lo contrario, insistir en solicitarle al usuario que 
	vuelva a escribir el número, hasta que este lo escriba correcto.
		Durante la fase de ejecución, su simulador deberá vigilar varios errores serios, como intentos
	de división entre cero, intentos de ejecución inválida de códigos de operaciones, desbordamiento
	del acumulador (es decir, operaciónes aritméticas que resulten en valores mayores que +9999 o
	menores que -9999) y otras similares. Estos errores serios son conocidos como errores fatales.
	Cuando se detecta un error fatal, su simulador deberá imprimir un mensaje de error como:
		*** Attempt to divide by zero ***
		*** Simpletron execution abnormally terminated ***
	y deberá imprimir un vaciado completo de computadora, en el formato ya analizado. Esto ayudará 
	al usuario a localizar el error dentro del programa.
	
		REGISTERS:
		accumulator				+0000
		instructionCounter	   00
		instructionRegister	+0000
		operationCode				00
		operand						00
		
	MEMORY:
				0			1			2			3			4			5			6			7			8			9
	  0  +0000	  +0000	  +0000	  +0000	  +0000	  +0000	  +0000	  +0000	  +0000	  +0000
	 10  +0000	  +0000	  +0000	  +0000	  +0000	  +0000	  +0000	  +0000	  +0000	  +0000
	 20  +0000	  +0000	  +0000	  +0000	  +0000	  +0000	  +0000	  +0000	  +0000	  +0000
	 30  +0000	  +0000	  +0000	  +0000	  +0000	  +0000	  +0000	  +0000	  +0000	  +0000
	 40  +0000	  +0000	  +0000	  +0000	  +0000	  +0000	  +0000	  +0000	  +0000	  +0000
	 50  +0000	  +0000	  +0000	  +0000	  +0000	  +0000	  +0000	  +0000	  +0000	  +0000
	 60  +0000	  +0000	  +0000	  +0000	  +0000	  +0000	  +0000	  +0000	  +0000	  +0000
	 70  +0000	  +0000	  +0000	  +0000	  +0000	  +0000	  +0000	  +0000	  +0000	  +0000
	 80  +0000	  +0000	  +0000	  +0000	  +0000	  +0000	  +0000	  +0000	  +0000	  +0000
	 90  +0000	  +0000	  +0000	  +0000	  +0000	  +0000	  +0000	  +0000	  +0000	  +0000
	
	FIGURA 7.32
*/
#include<stdio.h>
#include<stdlib.h>

#define TAMANHO 100
#define READ 10					
#define WRITE 11						
#define LOAD 20						
#define STORE 21						
#define ADD 30						
#define SUBTRACT 31					
#define DIVIDE 32						
#define MULTIPLY 33					
#define BRANCH 40						
#define BRANCHNEG 41					
#define BRANCHZERO 42				
#define HALT 43

void intro(void);
void inicializar(short *const, short *const, char *const, char *const, char *const);
char loading(int [], char *const);
void vaciado(const short, const short, const int [], const char, const char, const char);

main()
{
	short accumulator = 0, instructionRegister = 0;
	int memory[TAMANHO] = {0};
	char instructionCounter = 0, operationCode = 0, operand = 0, err = 0, datos = 0;
	
	intro();
	if(loading(memory, &instructionCounter))
	{
		printf("*** Program loading completed ***\n");
		printf("*** Program execution begins ***\n");
		inicializar(&accumulator, &instructionRegister, &instructionCounter, &operationCode, &operand);
		
		while(memory[instructionCounter] != -99999)
		{
			instructionRegister = memory[instructionCounter];
			operationCode = instructionRegister / 100;
			operand = instructionRegister % 100;
			
			switch(operationCode)
			{
				case READ:
					printf("? ");
					scanf("%d", &memory[operand]);
					break;					
				case WRITE:
					printf("> %d\n", memory[operand]);
					break;						
				case LOAD:
					accumulator = memory[operand];
					break;						
				case STORE:
					memory[operand] = accumulator;
					break;						
				case ADD:
					accumulator += memory[operand];
					
					if(accumulator > 9999 || accumulator < -9999)
					{
						printf("\aDesbordamiento del acumulador.\n");
						printf("Ejecucion de Simpletron terminada anormalmente.\n");
						accumulator = -1;
						err = 1;
					}
					break;						
				case SUBTRACT:
					accumulator -= memory[operand];
					
					if(accumulator > 9999 || accumulator < -9999)
					{
						printf("\aDesbordamiento del acumulador.\n");
						printf("Ejecucion de Simpletron terminada anormalmente.\n");
						accumulator = -1;
						err = 1;
					}
					break;					
				case DIVIDE:
					if(memory[operand] != 0)
						accumulator /= memory[operand];
					else
					{
						printf("\aError por division por cero.\n");
						printf("Ejecucion de Simpletron terminada anormalmente.\n");
						accumulator = -1;
						err = 1;
						break;
					}
					
					if(accumulator > 9999 || accumulator < -9999)
					{
						printf("\aDesbordamiento del acumulador.\n");
						printf("Ejecucion de Simpletron terminada anormalmente.\n");
						accumulator = -1;
						err = 1;
					}
					break;						
				case MULTIPLY:
					accumulator *= memory[operand];
					
					if(accumulator > 9999 || accumulator < -9999)
					{
						printf("\aDesbordamiento del acumulador.\n");
						printf("Ejecucion de Simpletron terminada anormalmente.\n");
						accumulator = -1;
						err = 1;
					}
					break;					
				case BRANCH:
					instructionCounter = operand - 1;
					break;						
				case BRANCHNEG:
					if(accumulator < 0)
						instructionCounter = operand - 1;
					break;					
				case BRANCHZERO:
					if(accumulator == 0)
						instructionCounter = operand - 1;
					break;				
				case HALT:
					printf("*** Simpletron execution terminated ***\n");
					vaciado(accumulator, instructionRegister, memory, instructionCounter, operationCode, operand);
					break;
				default:
					if(datos != 1)
					{
						printf("\aOperacion invalida.\n");
						operationCode = -1;
						err = 1;
					}
					break;
			}
			
			if(operationCode == 43)
				datos = 1;
			
			if(err == 1)
				break;
				
			++instructionCounter;
		}
	}
	else
		printf("\aMemoria insuficiente para cargar el programa. (Tamanho = 100)\n");
	
   system("PAUSE");
   return 0;
}

/* Imprime los registros y la memoria */
void vaciado(const short a, const short r, const int m[], const char c, const char o, const char op)
{
	char i;
	
	printf("*******************************************************************************\n");
	printf("%19s:\n", "REGISTERS");
	printf("%19s = %.4hd\n", "accumulator", a);
	printf("%19s = %.4hd\n", "instructionRegister", r);
	printf("%19s = %.2d\n", "instructionCounter", c);
	printf("%19s = %.2d\n", "operationCode", o);
	printf("%19s = %.2d\n", "operand", op);
	printf("*******************************************************************************\n");
	printf("				MEMORY\n");
	printf("*******************************************************************************\n");
	
	printf("%6c %6c %6c %6c %6c %6c %6c %6c %6c %6c %6c\n", ' ', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9');
	printf("%6d ", 0);
	for(i = 0; i <= TAMANHO - 1; i++)
	{
		if((i % 10 == 0) && i != 0)
		{
			putchar('\n');
			printf("%6d ", i);
			printf("%6.4d ", m[i]);
		}
		else
			printf("%6.4d ", m[i]);
	}
	printf("\n*******************************************************************************\n");
}

void inicializar(short *const a, short *const r, char *const c, char *const cod, char *const o)
{
	*a = *r = *c = *cod = *o = 0;
}

/*
	loading():
		- El objetivo de la función es colocar el programa LMS en la memoria.
		- Se utiliza el retorno (del tipo char) porque la función solamente devuelve 0-1:
			. 0: Memoria insuficiente.
			. 1: Carga del programa con éxito.
		- Parámetros: memory[100], instructionCounter.
*/
char loading(int memory[], char *const position)
{
	do
	{
		do{
			printf("%.2d ? ", *position);
			scanf("%d", &memory[*position]);
		}while((memory[*position] > 9999 || memory[*position] < -9999) && memory[*position] != -99999);
		
		if(memory[*position] == -99999)
			return 1;
	}while(++(*position) <= TAMANHO - 1);
	
	return 0;
}

void intro(void)
{
	printf("***           Welcom to Simpletron            ***\n");
		
	printf("*** Pleas enter your program one inatruction  ***\n");	
	printf("*** (or data word) at a time. I will type the ***\n");	
	printf("*** location number and a question mark (?).  ***\n");
	printf("*** You then type the word for that location  ***\n");	
	printf("*** Type the sentinel -99999 to stop entering ***\n");
	printf("*** your program. ***\n");	
}
