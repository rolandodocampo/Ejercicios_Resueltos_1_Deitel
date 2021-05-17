/*
	Author: Rolando Docampo Fernández
	Place: Casa de Marcia
	Date: 10/05/20 17:36
	Description: 10.8. Crear la unión integer con miembros char c, short s, int 
	i, y long l. Escriba un programa que introduzca el valor del tipo char, 
	short, int y long, y que almacene los valores en las variables de unión del
	tipo union interger. Cada variable de unión deberá ser impresa como un char,
	un short, un int, y un long. Se imprimen siempre los valores en forma 
	correcta?.
*/
#include<stdio.h>
#include<stdlib.h>

union interger{
	char c;
	short s;
	int i;
	long l;
};

main()
{
	union interger var_char, var_short, var_int, var_long;
	
	var_char.c = sizeof(char);
	var_short.s = sizeof(short);
	var_int.i = sizeof(int);
	var_long.l = sizeof(long);
	
	printf("char = %c\nshort = %hd\nint = %d\nlong = %ld\n", 
			var_char.c, var_short.s, var_int.i, var_long.l);
	
    system("PAUSE");
    return 0;
}

// la variable char es la única que se imprime mal, todas las demás estan bien.
