/*
	Author: Rolando Docampo Fern�ndez
	Place: Casa de Marcia
	Date: 04/05/20 12:24
	Description: 9.9. Escriba un programa que imprima los valores de apuntador
	utilizando todos los especificadores de conversi�n enteros y la 
	especificaci�n de conversi�n %p. Cuales son los que imprimen valores raros?
	Cuales son los que causan errores?. En cual de los formatos la 
	especificaci�n de conversi�n %p despliega en su sistema la direcci�n?
*/
#include<stdio.h>
#include<stdlib.h>

main()
{
	char a[1];
	
	printf("%%d: %d\n%%i: %i\n%%o: %o\n"
		   "%%u: %u\n%%x: %X\n%%p: %p\n", a, a, a, a, a, a);
	
    system("PAUSE");
    return 0;
}
