#include<stdio.h>

/**
*main-Entry part
*Description:prints the alphabet in lowercase, and then in uppercase,
*followed by a new line.
*Return: Always 0 is succes.
*/

int main(void)
{
	char ch;
	char CH;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (CH = 'A'; CH <= 'Z'; CH++)
	{
		putchar(CH);
	}
	putchar('\n');
	return (0);
}
