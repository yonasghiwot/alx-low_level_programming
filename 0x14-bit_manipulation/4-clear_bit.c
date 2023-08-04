#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index
 * @n: pointer to integer to be searched
 * @index: index is the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	long int temp;
	int flag = 0;

	if (index > 63 || !n)
		return (-1);

	if (*n >= (unsigned long int)LONG_MIN)
	{
		*n -= (unsigned long int)LONG_MIN;
		if (index == 63)
			return (1);

		flag= 1;
	}

	temp = (long int)*n;
	if ((temp >> index) & 1)
	{
		temp -= 1 << index;
		*n = temp;
	}
	*n = (unsigned long int)temp;

	if (flag)
		*n += (unsigned long int)LONG_MIN;

	return (1);
}
