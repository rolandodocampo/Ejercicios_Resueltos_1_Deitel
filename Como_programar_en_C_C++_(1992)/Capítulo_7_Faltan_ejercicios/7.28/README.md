# 7.28

(Arreglos de apuntadores a funciones). Vuelva a escribir el programa de la figura 6.22 para utilizar una interfaz manejada por menú. El programa deberá darle 4 opciones al usuario, como sigue:
		    Enter a choice:
			0	Print the array of grades
			1	Find the minimum grades
			2	Find the maximum grades
			3	Print the average on all tests for each students
			4	End program
Una resctricción para el uso de arreglos de apuntadores es que todos los 	apuntadores tienen que ser del mismo tipo. Los apuntadores deben ser a 	funciones con el mismo tipo de regreso y que reciban argumentos del mismo	tipo. Por esta razón, deberán ser modificadas las funciones en la figura 6.22, de tal forma que cada una de ellas pueda regresar el mismo tipo y tomar los mismos parámetros. Modifique las funciones minimum y maximum para imprimir el valor minimo y maximo y que regresen nada. En el caso de la opción 3, modifique la función average de la figura 6.22 para que se extraiga el promedio de cada alumno (y no de un alumno en particular). La función average debe regresar nada y tomar los mismos parámetros que printArray, minimum y maximum. Almacene los apuntadores a las cuatro funciones en el arreglo processGrades y utilice la elección que efectúe el usuario como subíndice del arreglo para modificar a cada una de las funciones.
