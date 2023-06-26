#include "main.h"
/**
 * _puts - prints string followd by new line
 * @str: input string to be printed
 * Return: nothing
 */
void _puts(char *str)
{
	int len;

	len = 0;

	while (*(str + len) != '\0')
	{
		_putchar(*(str + len));
		len++;
	}
	_putchar('\n');
}
