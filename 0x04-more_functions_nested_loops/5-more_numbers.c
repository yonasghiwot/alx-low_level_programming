#include "main.h"

/**
 * more_numbers - Write a function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 * Description: Prints the numbers with _putchar
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, j, units, tens;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			tens = j / 10;
			units = j % 10;
			if (j > 9)
				_putchar(tens + '0');

			_putchar(units + '0');
		}
		_putchar('\n');
	}
}
