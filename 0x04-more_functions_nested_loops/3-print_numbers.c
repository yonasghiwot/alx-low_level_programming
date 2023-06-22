#include "main.h"

/**
 * print_numbers-function that prints the numbers
 * from 0 to 9, followed by a new line.
 * Description: Prints the numbers with _putchar using for loop
 *
 * Return: No return
 */

void print_numbers(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		_putchar(number);
	}
	_putchar('\n');
}
