#include "main.h"

/**
 * flip_bits -a function that returns the number of bits you would need to
 *            flip to get from one number to another.
 * @n: first number to be compared
 * @m: second number to be compared
 * Return: number of bits that differ between the two values
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	long int temp_n, temp_m, differ;

	if (n >= (unsigned long int)LONG_MIN)
	{
		n -= (unsigned long int)LONG_MIN;
		if (m >= (unsigned long int)LONG_MIN)
		{
			m -= (unsigned long int)LONG_MIN;
		}
		else
			count++;
	}

	temp_n = (long int)n;
	temp_m = (long int)m;
	differ = temp_n ^ temp_m;

	for (i = 0; i < 63; i++)
	{
		if ((differ >> i) & 1)
			count++;
	}

	return (count);
}
