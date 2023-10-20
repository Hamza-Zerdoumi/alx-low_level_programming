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


	for (i = 0; string[i] != '\0'; i++)
	{
		_putchar(string[i]);
	}
	_putchar('\n');
	return (0);
}

