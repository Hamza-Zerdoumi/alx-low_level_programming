#include "main.h"
/**
*print_alphabet_x10 - function to print  10 time   the aplhabet ();
*
*Description:  function to print 10 tims the  aplhabets followed by new line.
*
* Return: 0 if succssed.
*/

void print_alphabet_x10(void)
{
	char ch;
	int i = 0;

	while (i < 10)
	{
		for (ch = 'a'; ch <= 'z';)
		{
			_putchar(ch);
			ch++;
		}
		i++;
		 _putchar('\n');

	}
}
