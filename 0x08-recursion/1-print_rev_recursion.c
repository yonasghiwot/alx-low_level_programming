#include "main.h"

/**
 * _print_rev_recursion - Write a function that prints a string in reverse.
 * @s: a pointer  string to print recursivly
 * return:nothing it is void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
