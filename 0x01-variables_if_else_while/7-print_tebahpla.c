#include<stdio.h>
/**
 *main-Entry part
 *Description: peinting the charactere in lower case.
 *Return: Alwyase 0 if sucess.
 */

int main(void)
{
	char alphabets[] = "zyxwvutsrqponmlkjihgfedcba";
	char  alphabet_;
	int i;

	alphabet_ = 'z';
	i = 0;
	while (alphabet_ != 'a')
	{
		putchar(alphabets[i]);
		alphabet_ = alphabets[i];
		i++;
	}
	putchar('\n');

	return (0);
}
