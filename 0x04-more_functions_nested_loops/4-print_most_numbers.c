#include "main.h"
/**
*print_most_numbers - functions to check if the character is upper or not.
*
*Return: without return.
*/

void print_most_numbers(void)
{
	char c;

	for (c = 0; c < 10; c++)
	{
		if (c == 2 || c == 4)
			continue;
		_putchar(c + '0');
	}
	_putchar('\n');
}







