/*
	Author: Rolando Docampo Fernández
	Place: Casa de Marcia
	Date: 20/04/20 23:47
	Description: 7.28. (Arreglos de apuntadores a funciones). Vuelva a escribir
	el programa de la figura 6.22 para utilizar una interfaz manejada por menú.
	El programa deberá darle 4 opciones al usuario, como sigue:
		Enter a choice:
			0	Print the array of grades
			1	Find the minimum grades
			2	Find the maximum grades
			3	Print the average on all tests for each students
			4	End program
	Una resctricción para el uso de arreglos de apuntadores es que todos los 
	apuntadores tienen que ser del mismo tipo. Los apuntadores deben ser a 
	funciones con el mismo tipo de regreso y que reciban argumentos del mismo
	tipo. Por esta razón, deberán ser modificadas las funciones en la figura 
	6.22, de tal forma que cada una de ellas pueda regresar el mismo tipo y 
	tomar los mismos parámetros. Modifique las funciones minimum y maximum para
	imprimir el valor minimo y maximo y que regresen nada. En el caso de la 
	opción 3, modifique la función average de la figura 6.22 para que se 
	extraiga el promedio de cada alumno (y no de un alumno en particular). La 
	función average debe regresar nada y tomar los mismos parámetros que 
	printArray, minimum y maximum. Almacene los apuntadores a las cuatro  
	funciones en el arreglo processGrades y utilice la elección que efectúe el 
	usuario como subíndice del arreglo para modificar a cada una de las 
	funciones.
*/
#include<stdio.h>
#include<stdlib.h>
#define STUDENTS 3
#define EXAMS 4

void minimum(int [][EXAMS], int, int);
void maximum(int [][EXAMS], int, int);
void average(int [][EXAMS], int, int);
void printArray(int [][EXAMS], int, int);

main()
{
	int	studentGrades[STUDENTS][EXAMS] = {{77, 68, 86, 73},
										  {96, 87, 89, 78},
										  {70, 90, 86, 81}}, valor;
	void (*processGrades[4])(int [][EXAMS], int, int) = {printArray, minimum, maximum, average};
	
	do
	{
		printf("\n\nEnter the choice:\n"
			   "0	Print the array of grades\n"
			   "1	Find the minimum grades\n"
			   "2	Find the maximum grades\n"
			   "3	Print the average on all tests for each students\n"
			   "4	End program\n");
		scanf("%d", &valor);
		
		if(valor != 4)
			(*processGrades[valor])(studentGrades, STUDENTS, EXAMS);
		
	}while(valor != 4);
	
    system("PAUSE");
    return 0;
}

void minimum(int grades[][EXAMS], int pupils, int tests)
{
	int i, j, lowGrades = 100;
	
	for(i = 0; i <= pupils - 1; i++)
	{
		for(j = 0; j <= tests - 1; j++)
		{
			if(grades[i][j] < lowGrades)
				lowGrades = grades[i][j];
		}
	}
	
	printf("\n\nLowest grades: %d\n", lowGrades);
}

void maximum(int grades[][EXAMS], int pupils, int tests)
{
	int i, j, highGrade = 0; 
	
	for(i = 0; i <= pupils - 1; i++)
	{
		for(j = 0; j <= tests - 1; j++)
		{
			if(grades[i][j] > highGrade)
				highGrade = grades[i][j];
		}
	}
	
	printf("Highest grade: %d\n", highGrade);
}

void average(int setOfGrades[][EXAMS], int pupil, int tests)
{
	int i, j, total = 0;
	
	for(i = 0; i <= pupil - 1; i++)
	{
		for(j = 0; j <= tests - 1; j++)
			total += setOfGrades[i][j];	
		
		printf("Average the student[%d] = %.2f\n", i, (float) total / tests);
	}
}

void printArray(int grades[][EXAMS], int pupils, int tests)
{
	int i, j;
	
	printf("			[0]	[1]	[2]	[3]");
	
	for(i = 0; i <= pupils - 1; i++)
	{
		printf("\nstudentGrades[%d]	", i);
		
		for(j = 0; j <= tests - 1; j++)
		{
			printf("%-5d	", grades[i][j]);
		}
	}
}
