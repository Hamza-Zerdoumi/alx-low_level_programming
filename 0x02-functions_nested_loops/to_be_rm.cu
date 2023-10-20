#include<stdio.h>
#include "main.h"

/**
*main -Entry part
*description: Print _putchar, followed a new line.
* Return: alwayse 0
*/

int main(void)

{
	char string[] = "_putchar";
	int i;

	/**_putchar("_putchar");*/
	for (i = 0; string[i] != '\0'; i++)
	{
		_putchar(string[i]);
	}
	int a = -1024, b = 98, c = 0, d =1;
	int r1 = a % 10, r2 = b % 10, r3 = c % 10,

	_putchar("\n");
	_putchar(r1);

	printf(" a = %d and the last d is %d\n", a, r1);
	printf(" b = %d and the last d is %d\n", b, r2);
	printf(" c = %d and the last d is %d\n", c, r3);
	return (0);
}

