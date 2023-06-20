#include "main.h"

/**
 * print_alphabet function - Entry point
 * * _putchar - writes the character c to stdout
 * 
 
 *  Return:0
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;

	}
	_putchar('\n');

}
