#include<stdio.h>
/**
 *main-Entry part
 *Description: peinting the numers from 0 to 9.
 *Return: Alwyase 0 if sucess.
 */

int main(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
