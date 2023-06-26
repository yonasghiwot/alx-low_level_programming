#include "main.h"
#include <stdio.h>
/**
 * _atoi - a function that convert a string to an integer
 * If there are no numbers in the string, the function must return 0
 * @s:  pointer to  character array take into account all the - and + signs
 * return: int .
 */
int _atoi(char *s)
{
	unsigned int counter, i, j, k;
	unsigned int length, number, startnum;
	int sign;

	sign = 1;
	counter = 0;
	number = 0;

	while (*(s + counter) != '\0')
		counter++;
	for (i = 0; i < counter; i++)
	{
		if (*(s + i) <= '9' && *(s + i) >= '0')
		break;
	}
	for (j = i; j < counter; j++)
	{
		if (!(*(s + j) <= '9' && *(s + j) >= '0'))
			break;
	}

	for (k = 0; k < i; k++)
	{
		if (*(s + k) == '-')
			sign = -sign;
	}
	length = j - i;
	startnum = i;
		while (length >= 1)
	{
		number = number * 10 + (*(s + startnum) - '0');
		startnum++;
		length--;
	}
	return (number * sign);
}

