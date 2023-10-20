#include<stdio.h>
/**
 *main-Entry part
 *Description: peinting the numers from 0 to 9.
 *Return: Alwyase 0 if sucess.
 */

int main(void)
{
	char numbers[] = "0123456789";
	char  number_;
	int i;

	number_ = '0';
	i = 0;
	while (number_ != '9')
	{
		putchar(numbers[i]);
		number_ = numbers[i];
		i++;
	}
	putchar('\n');

	return (0);
}
