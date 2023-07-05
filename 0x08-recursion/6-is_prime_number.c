#include "main.h"

/**
 * is_prime_number - returns 1 if input integer is a prime number, otherwise 0
 * @n: input  number to evaluted
 * Return: 1 if n is prime number otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (real_prime(n, n - 1));
}

/**
 * real_prime - calculates if a number is prime recursively
 * @n: input  number to evaluate
 * @i: int for iteration
 * Return: 1 if n is prime, 0 if not
 */
int real_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (real_prime(n, i - 1));
}
