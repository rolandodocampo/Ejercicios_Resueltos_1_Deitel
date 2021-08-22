/*
	Author: Rolando Docampo Fernández
	Place: Casa Karenia
	Date: 08/12/19 13:16
	Description: 5.46. Este ejercicio es sólo para ver lo que se imprime.
*/
#include<stdio.h>
#include<stdlib.h>

main()
{
	int c;
	
	if((c = getchar()) != EOF)
	{
		main();
		printf("%c", c);
	}

   return 0;
}
