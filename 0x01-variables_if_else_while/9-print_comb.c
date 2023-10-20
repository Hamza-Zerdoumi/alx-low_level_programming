#include<stdio.h>

/**
*main - Entry part
* Description: program that prints all possible combinations
* of single-digit numbers.
*Return: always 0 if all  mach good
*/

int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n < 58 - 1)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
