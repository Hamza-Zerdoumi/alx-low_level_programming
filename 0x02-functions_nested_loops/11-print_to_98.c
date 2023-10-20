#include "main.h"
#include <stdio.h>
/**
*print_to_98 -  adds two integers and returns the result.
*@n: integer .
*Return: return all the number fi.
*/

void print_to_98(int n)
{
	if (n < 98)
	{
		for ( ; n < 98;)
			printf("%d, ", n++);
		/** Equivalent to use i = n; i < 98; i++ */

		printf("%d\n", 98);
	}
	else
	{
		for ( ; n > 98;)
			printf("%d, ", n--);

		printf("%d\n", 98);

	}
}
