/*
	Author: Rolando Docampo Fernández
	Place: INEL Santiago de Cuba
	Date: 17/07/19 11:54
	Description: 3.22 Escriba un programa en C que demuestre la diferencia entre
	predecrementar y postdecrementar, utilizando el operador decrementar --. 
*/
#include <stdio.h>
#include <stdlib.h>

main()
{
	int a = 5;
	
	printf("a   = %d\n", a);
	printf("a-- = %d\n", a--);
	printf("a   = %d\n\n", a);
	
	a = 5;
	printf("  a = %d\n", a);
	printf("--a = %d\n", --a);
	printf("  a = %d\n\n", a);
	
   system("PAUSE");
   return 0;
}
