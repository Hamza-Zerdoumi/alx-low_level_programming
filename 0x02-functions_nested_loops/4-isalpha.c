#include "main.h"

/**
*_isalpha - function  to check  ();
*
*Description:  function to check if the character
* is alphabetic lower or charte  .
*@c: is the character
* Return: 1 if character is alphabetic and 0 otherwise .
*/


int _isalpha(int c)
{
	if ((c >= 97 &&  c <= 122) || (c >= 65 && c <= 90))
		return (1);

	return (0);
}