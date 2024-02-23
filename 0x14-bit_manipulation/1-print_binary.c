#include "main.h"

/**
 * binary_to_uint - func that converts a binary number to an unsigned int
 * @b: char string of digits to be converted
 * Return: converted value as unsigned int, or 0 if any char in string
 *       : is not 0 or 1, or if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int length, i;
	unsigned int binary = 0;

	if (!b)
		return (0);

	for (length = 0; b[length];)
	{
		length++;
	}

	length--;
	for (i = 0; b[i]; i++, length--)
	{
		if (b[i] == '1')
		{
			binary += 1 << length;
			continue;
		}
		else if (b[i] == '0')
			continue;
		else
			return (0);
	}

	return (binary);
}