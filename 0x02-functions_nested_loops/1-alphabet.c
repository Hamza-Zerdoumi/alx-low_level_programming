#include "main.h"
/**
*print_alphabet - function to print all  the aplhabet ();
*
*Description:  function to print all  the aplhabet
*
* Return: 0 if succssed.
*/

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z';)
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');

}
