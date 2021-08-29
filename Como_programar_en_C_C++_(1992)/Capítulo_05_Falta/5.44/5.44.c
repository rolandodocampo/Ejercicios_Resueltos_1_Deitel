/*
	Author: Rolando Docampo Fernández
	Place: Casa de Karenia
	Date: 08/12/19 13:42
	Description: 5.44. Los ejercicios 5.32 al 5.34 desarrollaron un programa de 
	instrucción asistido por computadora, para enseñar la multiplicación a un 
	alumno de escuela primaria. Este ejercicio sugiere mejoras a dicho programa.
		a) Modifique el programa para permitir al usuario la introducción de una
		capacidad de nivel de grado. Un nivel de grado 1 significa que utilice
		en los problemas sólo números de un dígito, un nivel de grado 2 
		significa la utilización de números de hasta dos dígitos de grande, etc.
		b) Modifique el programa para permitirle al usuario escoger el tipo de 
		problemas aritméticos que él o ella desee estudiar. Una opción 1 
		significa sólo problemas de sumas, 2 significa problemas de resta, 3
		significa problemas de multiplicación, 4 significa sólo problemas de 
		división y 5 significa problemas entremezclados al azar, de todos los 
		tipos anteriores.
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/* regresa la frec_malas; entra el tipo de test escogido; nivel */
short inciso_b(short, short); 
short expansion(short);
void  dialogo(short);
short suma(short);
short resta(short);
short multiplicacion(short);
short division(short);
short mezclado(short);

main()
{
	short nivel, tipo_test, incorrectas;
	float porciento = 7.5;
	
	srand(time(NULL));
	
	printf("*************************\n");
	printf("* Bienvenido estudiante *\n");
	printf("*************************\n");
	printf("Cual nivel deseas ejercitarte?. ");
	printf("Los niveles son los numeros de digitos\n");
	printf("de los numeros a ejercitarse, ejemplo: \n");
	printf("Nivel 1: solo numeros de un digito como el 9, 8, 4, etc.\n");
	printf("Nivel 2: hasta numeros de dos digitos, como el 10, 30, 55, etc.\n");
	printf("Asi que, cual nivel deseas ejercitarte?: ");
	scanf("%hd", &nivel);
	printf("---------------------------------------\n");
	printf("Los calculos aritmeticos que tenemos son:\n");
	printf("El numero 1: Suma.\n");
	printf("El numero 2: Resta.\n");
	printf("El numero 3: Multiplicacion.\n");
	printf("El numero 4: Division.\n");
	printf("El numero 5: Calculo aleatorio.\n");
	printf("Que calculo deseas ejercitarte?: ");
	scanf("%hd", &tipo_test);
	printf("---------------------------------------\n");
	printf("Tienes 10 intentos solamente\n");
	incorrectas = inciso_b(tipo_test, nivel);
	printf("---------------------------------------\n");
	printf("Respuestas correctas: %hd\n", 10 - incorrectas);
	printf("Respuestas incorrectas: %hd\n", incorrectas);
	
	if((10 - incorrectas) < porciento)
		printf("Tu rendimiento es malo. Sigue estudiando\n");
	
	printf("---------------------------------------\n");
	printf("GRACIAS POR PARTICIPAR EN ESTE TEST\n");
	
	system("PAUSE");
	return 0;
}

short inciso_b(short tipo, short nivel)
{
	short respuestas_incorrectas = 0;
	
	switch(tipo)
	{
		case 1: 
			respuestas_incorrectas = suma(expansion(nivel));
			break;
		case 2:
			respuestas_incorrectas = resta(expansion(nivel));
			break;
		case 3:
			respuestas_incorrectas = multiplicacion(expansion(nivel));
			break;
		case 4:
			respuestas_incorrectas = division(expansion(nivel));
			break;
		case 5:
			respuestas_incorrectas = mezclado(expansion(nivel));
			break;
		default:
			printf("Esta prueba no existe. Intente de nuevo: ");
			respuestas_incorrectas = -1;
			break;
	}
	
	return respuestas_incorrectas;
}

short suma(short digito)
{
	short num1, num2, resultado, respuesta;
	static short incorrectas, correctas, control;
	
	if(control == 11)
	{
		incorrectas = 0;
		correctas = 0;
		control = 0;
	}
	
	if(incorrectas + correctas == 10)
		return incorrectas;
				
	num1 = rand() % digito;
	num2 = rand() % digito;
	resultado = num1 + num2;
	
	printf("Cuanto es %hd + %hd?: ", num1, num2);
	scanf("%hd", &respuesta);
	
	while(respuesta != resultado)
	{
		incorrectas++;
		control++;
		dialogo(0);	
		
		if(incorrectas + correctas == 10)
				return incorrectas;
		
		printf("Cuanto es %hd + %hd?: ", num1, num2);
		scanf("%hd", &respuesta);
	}
	
	correctas++;
	dialogo(1);
	control++;
	return suma(digito);
}

short resta(short digito)
{
	short num1, num2, resultado, respuesta;
	static short incorrectas, correctas, control;
	
	if(control == 11)
	{
		incorrectas = 0;
		correctas = 0;
		control = 0;
	}
	
	if(incorrectas + correctas == 10)
		return incorrectas;
				
	num1 = rand() % digito;
	num2 = rand() % digito;
	resultado = num1 - num2;
	
	printf("Cuanto es %hd - %hd?: ", num1, num2);
	scanf("%hd", &respuesta);
	
	while(respuesta != resultado)
	{
		incorrectas++;
		control++;
		dialogo(0);	
		
		if(incorrectas + correctas == 10)
				return incorrectas;
		
		printf("Cuanto es %hd - %hd?: ", num1, num2);
		scanf("%hd", &respuesta);
	}
	
	correctas++;
	dialogo(1);
	control++;
	return resta(digito);
}

short multiplicacion(short digito)
{
	short num1, num2, resultado, respuesta;
	static short incorrectas, correctas, control;
	
	if(control == 11)
	{
		incorrectas = 0;
		correctas = 0;
		control = 0;
	}
	
	if(incorrectas + correctas == 10)
		return incorrectas;
				
	num1 = rand() % digito;
	num2 = rand() % digito;
	resultado = num1 * num2;
	
	printf("Cuanto es %hd * %hd?: ", num1, num2);
	scanf("%hd", &respuesta);
	
	while(respuesta != resultado)
	{
		incorrectas++;
		control++;
		dialogo(0);	
		
		if(incorrectas + correctas == 10)
				return incorrectas;
		
		printf("Cuanto es %hd * %hd?: ", num1, num2);
		scanf("%hd", &respuesta);
	}
	
	correctas++;
	dialogo(1);
	control++;
	return multiplicacion(digito);
}

short division(short digito)
{
	short num1, num2, resultado, respuesta;
	static short incorrectas, correctas, control;
	
	if(control == 11)
	{
		incorrectas = 0;
		correctas = 0;
		control = 0;
	}
	
	if(incorrectas + correctas == 10)
		return incorrectas;
				
	num1 = rand() % digito;
	num2 = rand() % digito;
	resultado = num1 / num2;
	
	printf("Cuanto es %hd / %hd?: ", num1, num2);
	scanf("%hd", &respuesta);
	
	while(respuesta != resultado)
	{
		incorrectas++;
		control++;
		dialogo(0);	
		
		if(incorrectas + correctas == 10)
				return incorrectas;
		
		printf("Cuanto es %hd / %hd?: ", num1, num2);
		scanf("%hd", &respuesta);
	}
	
	correctas++;
	dialogo(1);
	control++;
	return division(digito);
}

short mezclado(short digito)
{
	short num1, num2, resultado, respuesta, azar;
	static short incorrectas, correctas, control;
	
	if(control == 11)
	{
		incorrectas = 0;
		correctas = 0;
		control = 0;
	}
	
	if(incorrectas + correctas == 10)
		return incorrectas;
	
	azar = 1 + rand() % 4;
	
	switch(azar)
	{
		case 1:
			num1 = rand() % digito;
			num2 = rand() % digito;
			resultado = num1 + num2;
	
			printf("Cuanto es %hd + %hd?: ", num1, num2);
			scanf("%hd", &respuesta);
			break;
		case 2:
			num1 = rand() % digito;
			num2 = rand() % digito;
			resultado = num1 - num2;
	
			printf("Cuanto es %hd - %hd?: ", num1, num2);
			scanf("%hd", &respuesta);
			break;
		case 3:
			num1 = rand() % digito;
			num2 = rand() % digito;
			resultado = num1 * num2;
	
			printf("Cuanto es %hd * %hd?: ", num1, num2);
			scanf("%hd", &respuesta);
			break;
		case 4:
			num1 = rand() % digito;
			num2 = rand() % digito;
			resultado = num1 / num2;
	
			printf("Cuanto es %hd / %hd?: ", num1, num2);
			scanf("%hd", &respuesta);
			break;
	}			
	
	
	while(respuesta != resultado)
	{
		incorrectas++;
		control++;
		dialogo(0);	
		
		if(incorrectas + correctas == 10)
				return incorrectas;
		
		switch(azar)
		{
			case 1:
				printf("Cuanto es %hd + %hd?: ", num1, num2);
				scanf("%hd", &respuesta);
				break;
			case 2:
				printf("Cuanto es %hd - %hd?: ", num1, num2);
				scanf("%hd", &respuesta);		
				break;
			case 3:
				printf("Cuanto es %hd * %hd?: ", num1, num2);
				scanf("%hd", &respuesta);
				break;
			case 4:
				printf("Cuanto es %hd / %hd?: ", num1, num2);
				scanf("%hd", &respuesta);
				break;
		}
	}
	
	correctas++;
	dialogo(1);
	control++;
	return mezclado(digito);
}

short expansion(short nivel)
{
	short i, max = 1;
	
	for(i = 1; i <= nivel; i++)
		max *= 10;
	
	return max;
}

void  dialogo(short valor)
{
	short i;
	
	i = 1 + rand() % 4;
	
	if(valor == 1)
	{
		switch(i)
		{
			case 1:
				printf("Muy bien!\n");
				break;
			case 2:
				printf("Excelente\n");
				break;
			case 3:
				printf("Buen trabajo!\n");
				break;
			default:
				printf("Manten arriba ese buen trabajo!\n");
				break;
		}
	}
	else
	{
		switch(i)
		{
			case 1:
				printf("No. Intenta de nuevo.\n");
				break;
			case 2:
				printf("Mal. Prueba una vez mas.\n");
				break;
			case 3:
				printf("No te dejes vencer!\n");
				break;
			default:
				printf("No. sigue intentando.\n");
				break;
		}
	}
}
