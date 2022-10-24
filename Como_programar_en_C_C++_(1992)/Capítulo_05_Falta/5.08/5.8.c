/*
	Author: Rolando Docampo Fernandez
	Place: Casa de Talita 
	Date: 12/10/22 14:49
	Description: 5.08 Muestre el valor de x después de que se hayan ejecutado los siguientes 
	enunciados: 
		a) x = fabs(7.5)
		b) x = floor(7.5)
		c) x = fabs(0.0)
		d) x = ceil(0.0)
		e) x = fabs(-6.4)
		f) x = ceil(-6.4)
		g) x = ceil(-fabs(-8 + floor(-5.5)))
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{	
	printf("x = %6.2lf\n", fabs(7.5));
	printf("x = %6.2lf\n", floor(7.5));
	printf("x = %6.2lf\n", fabs(0.0));
	printf("x = %6.2lf\n", ceil(0.0));
	printf("x = %6.2lf\n", fabs(-6.4));
	printf("x = %6.2lf\n", ceil(-6.4));
	printf("x = %6.2lf\n", ceil(-fabs(-8 + floor(-5.5))));

   system("PAUSE");
   return 0;
}
