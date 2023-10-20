#include "main.h"

/**
*_islower - function to print  to check  ();
*
*Description:  function to check if plhabets is lower .
*@c: is the character
* Return: 1 if character is lower and 0 otherwise .
*/


int _islower(int c)
{
	if (c >= 97 &&  c <= 122)
		return (1);

	return (0);
}
