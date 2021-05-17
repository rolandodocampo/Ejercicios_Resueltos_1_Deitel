/*
	Author: Rolando Docampo Fernández
	Place: INEL Santiago
	Date: 03/12/19 15:42
	Description: 5.36. Modifique el programa del ejercicio 5.35 para contar el 
	número de veces que intenta adivinar el jugador. Si el número es 10 o menor,
	imprima Either you know the secret or you got lucky!. Si el jugador adivina 
	en 10 intentos, entonces imprima Ahah!, you know the secret!. Si el jugador 
	hace más de 10 intentos, entonces imprima You should be able to do better!
	Por qué no debería de tomar más de 10 intentos? "Bueno", con cada una de las
	estimaciones buenas, el jugador tendría que estar en posición de eliminar la 
	mitad de los números. Ahora muestre porque cualquier número del 1 al 1000 
	puede ser encontrado en 10 o menos intentos.
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

short generador(void);
short prueba(short);

main()
{
	char letra;
	short frecuencia;
	
	srand(time(NULL));
	
	do
	{
		frecuencia = prueba(generador());
		
		if(frecuencia <= 10)
			printf("Either you know the secret or you got lucky!\n");
		else if(frecuencia == 10)
			printf("Ahah!, you know the secret!\n");
		else if(frecuencia > 10)
			printf("You should be able to do better!\n");
			
		printf("Would you like to play again (y or n)?\n");
		letra = getchar();
		
		switch(letra)
		{
			case ' ': case '\n':
				letra = getchar();
			case 'n': case 'N':
				letra = 1;
				break;
		}
	}while(letra != 1);
	
	system("pause");
	return 0;
}

short generador(void)
{
	short numero;
	
	numero = 1 + rand() % 1000;
	printf("I have a number between 1 and 1000.\n");
	printf("Can you guess my number?\n");
	printf("Please type your first guess.\n");
	return numero;
}

short prueba(short numero)
{
	short num_usuario, frecuencia = 0;
	
	do
	{
		scanf("%hd", &num_usuario);
		
		if(num_usuario == numero)
			printf("Excellent! You guessed the number!\n");
		else if(num_usuario < numero)
			printf("Too low. Try again.\n");
		else
			printf("Too high. Try again.\n");
		
		frecuencia++;			
	}while(num_usuario != numero);
	
	return frecuencia;
}
