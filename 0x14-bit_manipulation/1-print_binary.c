<<<<<<< HEAD
#include "main.h"

/**
 * print_binary - is a function that print binary comibination of int nums
 * @n: numebr n is unsigned long integer n to be printed recursively
 * return: nothing
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0);

}
=======
#include "main.h"

/*
 * print_binary:Prints the binary representation of a number
 * @n:The number to be printed in binary
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
>>>>>>> 3f7f7683742bb1ba15feda0584f4bef4a157ef35
