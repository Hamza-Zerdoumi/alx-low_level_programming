#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


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

	for (ch = 'a'; ch != 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');

}
