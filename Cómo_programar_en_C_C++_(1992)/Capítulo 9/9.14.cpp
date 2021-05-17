/*
	Author: Rolando Docampo Fernández
	Place: Casa de Marcia  
	Date: 04/05/20 13:16
	Description: 9.14. Escriba un programa para probar todas las secuencias de 
	escape de la figura 9.16. Para aquellas secuencias de escape que mueven el
	cursor, imprima un carácter, antes y después de imprimir la secuencia de 
	escape, a fin de que resulte claro dónde se ha movido el cursor.
*/
#include<stdio.h>
#include<stdlib.h>

main()
{
	printf("\"\n");
	printf("\\\n");
	printf("\a\n");
	printf("-\r-\n");
	printf("-\t-\n");
	printf("-\v-\n");
	printf("-\n-");
	printf("-\b-\n");
	printf("\?\n");
	printf("\f\n");
	
    system("PAUSE");
    return 0;
}
