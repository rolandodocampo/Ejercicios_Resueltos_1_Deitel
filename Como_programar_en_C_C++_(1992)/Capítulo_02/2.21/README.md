# 2.21 Imprimir un recuadro, oval, una flecha y un diamante.

**Problema:**

Escriba un programa que imprima un recuadro, un oval, una flecha y un diamante, como sigue:

```c
	*********           ***					*				*
   	*		*	      *      *			   ***			   * *
   	*		*		 *        *			  *****		     *	  *
   	*		*		 *		  *				*			*      *
   	*		*		 *		  *				*		   *	    *
   	*		*		 *		  *				*			*	   *
   	*		*		  *	      *				*			 *   *
   	*		*		   *	 *				*			  * *
   	*********		     ***				*			   *
```

**Código:**

```c
#include <stdio.h>
#include <stdlib.h>

main()
{
	printf("*********         ***             *           *\n");
	printf("*       *       *     *          ***         * *\n");
	printf("*       *      *       *        *****       *   *\n");
	printf("*       *      *       *          *        *     *\n");
	printf("*       *      *       *          *       *       *\n");
	printf("*       *      *       *          *        *     *\n");
	printf("*       *      *       *          *         *   *\n");
	printf("*       *       *     *           *          * *\n");
	printf("*********         ***             *           *\n");
	
    system("PAUSE");
    return 0;
}
```




