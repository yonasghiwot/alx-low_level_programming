#include "main.h"
/**
 * print_most_numbers - A function who print the numbers 0-9
 * except 2 and 4.
 * Description - function that doesnt take any parameters
 * Return: Does not return anything
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (!(i == '2' || i == '4'))
			_putchar(i);
	}
	_putchar('\n');
}
