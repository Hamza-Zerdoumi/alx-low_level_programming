#include<stdio.h>
#include "main.h"

/**
*main -Entry part
*description: Check the if alphabet is lower.
* Return: alwayse 0
*/

int main(void)

{
	int r ;

	r=  _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}

