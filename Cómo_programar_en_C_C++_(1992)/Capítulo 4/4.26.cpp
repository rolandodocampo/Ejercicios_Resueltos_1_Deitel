/*
	Author: Rolando Docampo Fernández
	Place: INEL Santiago
	Date: 27/08/19 08:13
	Description: 4.26 Calcule el valor de pi a partir de la serie infinita:
		pi = 4 - (4/3) + (4/5) - (4/7) + (4/9) - (4/11) + ...
	Imprimir una tabla que muestre el valor de pi aproximado a un término de esta
	serie, a dos, a tres, etc. Cuantos términos de esta serie tendrá que utilizar
	antes de que empiece a tener 3.14?, 3.141?, 3.1415?, 3.14159?.
*/
#include <stdio.h>
#include <stdlib.h>

main()
{
	int termino, denominador, piE = 4, piF = 0;
	float pi = 4;
	
	printf("%s\t%s\n", "Termino", "Valor de pi");
	for(denominador = 3, termino = 1; piE != 3 || piF != 141159; denominador += 2, termino++)
	{
		if(termino % 2 == 0)
			pi += (float)4 / denominador;
		else
			pi -= (float)4 / denominador;
			
		piE = (int)pi;
		piF = (int)(pi * 1000000) % 1000000;
			
		printf("%d\t%f\n", termino, pi);
	}

   system("PAUSE");
   return 0;
}
