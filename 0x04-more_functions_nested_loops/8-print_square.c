#include "main.h"

/**
 * print_square - A function who print a square
 * @size : is input parameter - input
 * The diagonal should end with a \n
 * If size is 0 or less, the function should only print a \n
 * Return: Does not return anything
 */

void print_square(int size)
{
	int i, j;
	int n = size;

	if (n > 0)
	{
		for (j = 0; j < n; j++)
		{
			for (i = 0; i < n; i++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
