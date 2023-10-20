#include<stdio.h>
/**
 *main-Entry part
 *Description: peinting the charactere in lower case.
 *Return: Alwyase 0 if sucess.
 */

int main(void)
{
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz";
	char  alphabet_;
	int i;

	alphabet_ = 'a';
	i = 0;
	while (alphabet_ != 'z')
	{
		putchar(alphabets[i]);
		alphabet_ = alphabets[i];
		i++;
	}
	putchar('\n');

	return (0);
}
