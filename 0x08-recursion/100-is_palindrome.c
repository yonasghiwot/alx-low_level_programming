#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: pointer to a string to be checked
 * Return: 1 if it is palindrome , 0 it not
 */
int is_palindrome(char *s)
{
	int i;
	int len;
	int palindrome;

	i = 0;
	len = _strlen_recursion(s);
	if (*s == 0)
	{
		return (1);
	}
	palindrome = forw_rev(s, i, len);
	return (palindrome);
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to string to be evaluted
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * forw_rev - checks the string characters recursively for palindrome
 * @s: pointer to  string to be  checked
 * @i: iterratrion varaibl
 * @len :  length of the string
 * Return: 1 if palindrome, 0 if not
 */
int forw_rev(char *s, int i, int len)
{
	len = len - 1;
	if (*(s + i) != *(s + len))
		return (0);
	if (i >= len)
		return (1);
	return (forw_rev(s, i + 1, len));
}
