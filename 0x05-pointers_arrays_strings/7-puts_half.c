#include "main.h"
/**
 * puts_half - Prints the last half of a string.
 * @str: input string
 * Return: nothing
 */
void puts_half(char *str)
{
	int i, j, length, halflength;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}

	length = i;
	if (length % 2 == 0)
	{
		halflength = length / 2;
	}
	else
	{
		halflength = (length - 1) / 2;
	}

	j = length - halflength;
	while (*(str + j) != '\0')
	{
		_putchar(*(str + j));
		j++;
	}
	_putchar('\n');
}
