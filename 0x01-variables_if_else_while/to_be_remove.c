#include<stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* strlen - function.
* Description:  function to describe calculate the length of a string.
* Return : The length og a string.
*/

int str_len(char str[])
{
	int length;
	int i;

	length=0;
	for(i = 0; str[i] != '\0';i++)

	{
		length+=1;
	}
	return (length);
}

/**
* main - Entry points.
* Description:  printing  the the nature  of  selective number.
* Return: always 0 (if Success)
*/

int main(void)
{
	int n;
	char str[20],ss;
	int the_last_n; 
	int SIZE;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	sprintf(str,"%d", n);
	SIZE = str_len(str);
	ss=str[SIZE-1];
	the_last_n = atoi(ss);
	printf("%d\n", the_last_n);
		
	if (the_last_n > 5)
	{
		printf("Last digit of %s  is %c and is greather than 5, The size is %d  \n", str, str[SIZE-1], SIZE);
	}
	else if (the_last_n == 0)
        {
		printf("Last digit of %s  is %c and is 0 , the size is %d \n", str, str[SIZE-1], SIZE);
        }
	else
	{
		printf("Last digit of %s  is %c and is less than 6 and not 0 , The size is %d  \n", str, str[SIZE-1], SIZE);
	}
	return (0);
}
