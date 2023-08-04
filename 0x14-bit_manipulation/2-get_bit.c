#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: integer to be searched
 * @index: is the index, starting from 0 of the bit we want to get
 * Return:value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int length = 0;
	long int temp_n;

	if (n >= (unsigned long int)LONG_MIN)
	{
		if (index == 63)
			return (1);

		length++;
		n -= (unsigned long int)LONG_MIN;
	}
	temp_n = (long int)n;

	for (; (temp_n >> length) | 0;)
	{
		length++;
	}
	length--;
	if (index > 63)
		return (-1);
	else if (index > (unsigned int)length)
		return (0);

	return ((temp_n >> index) & 1);
}
