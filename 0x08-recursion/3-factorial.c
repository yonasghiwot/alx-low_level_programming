#include "main.h"

/**
 * factorial - returns the factorial of a number recursivily
 * @n:input number to be evaluted
 * Return (-1) : if n is less than 0, to indicate an error
 * Return (0) : if n is equal to 1
 * Return value of 'factorial' is  recursive int value(n * factorial(n - 1))
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
