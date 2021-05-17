/*
	Author: Rolando Docampo Fernández
	Place: Casa de Marcia
	Date: 10/05/20 23:01
	Description: 10.9. Crear la unión floatingPoint con los miembros float f,
	double d, y long double l. Escriba un programa que introduzca el valor del
	tipo float, double, y long double, y almacene los valores en variables de 
	unión del tipo unionfloatingPoint. Cada variable de unión deberá imprimirse
	como un float, un double, y un long double. Se imprimen siempre los valores
	correctos?.
*/
#include<stdio.h>
#include<stdlib.h>

union floatingPoint{
	float f;
	double d;
	long double l;
};
typedef union floatingPoint unionfloatingPoint;

main()
{
	unionfloatingPoint var_float, var_double, var_long_double;
	
	printf("%f\n", var_float.f = sizeof(float));
	printf("%f\n", var_double.d = sizeof(double));
	printf("%Lf\n", var_long_double.l = sizeof(long double));
	
    system("PAUSE");
    return 0;
}

// El valor que se esta imprimiendo mal es el de long double.
