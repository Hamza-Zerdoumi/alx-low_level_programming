#include "main.h"
#include<stdio.h>
/**
*more_numbers - functions to print the number from 0 to 14 , ten times.
*
*Return: without return.
*/

void more_numbers(void)
{
	int numbers[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
	int i, t;

	/**printf("\nwe are inside the 5-more_numbers\n");*/
	for (t = 0; t < 10; t++)
	{
		/**printf("\nwe are inside boocle one t  in 5-mo\n");*/
		for (i = 0; numbers[i] < 15; i++)
		{	/**printf("\nwe are inside boocle 2 one i  in 5-mo\n");*/
			if (numbers[i] > 9)
				_putchar('1');
			_putchar(numbers[i] % 10 + '0');


		}
	_putchar('\n');
	}

}







