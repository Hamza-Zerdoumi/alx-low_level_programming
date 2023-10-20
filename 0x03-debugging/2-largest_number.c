#include "main.h"

/**
*largest_number - return the larget number
*
*@a: number1
*
*@b: number2
*
*@c: number 3
*
*Return: The large number of a b c.
*/


int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b)
	{
		if (a > c)
			largest = a;
		else
			largest = c;
	}
	else
	{
		if (b > c)
			largest = b;
		else
			largest = c;
	}
	return (largest);
}
