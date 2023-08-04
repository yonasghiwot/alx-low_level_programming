#include "main.h"

/**
 * print_binary -function that prints the binary representation of a number
 * @n: base Ten integer or decimal to be converted
 */

void print_binary(unsigned long int n)
{
	int length, i;
	long int temp;

	if (n == 0)
		_putchar('0');

	if (n >= (unsigned long int)LONG_MIN)
	{
		n -= (unsigned long int)LONG_MIN;
		temp = (long int)n;
		_putchar('1');
		for (i = 62; i > -1; i--)
		{
			_putchar(((temp >> i) & 1) + '0');
		}
	}
	else
	{
		temp = (long int)n;
		for (length = 0; (temp >> length) | 0;)
		{
			length++;
		}
		length--;
		for (; length > -1; length--)
		{
			_putchar(((temp >> length) & 1) + '0');
		}
	}
}
