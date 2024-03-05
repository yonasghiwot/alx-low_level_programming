#include "main.h"
/*print_binary - Prints the binary representation of a number
 * @n: The number to be printed in binary
 */

void print_binary(unsigned long int n)
{
	
	if (n > 1)
	{
		print_binary(n >> 1);
	}
<<<<<<< HEAD
	
=======

>>>>>>> 2a4d3a8fc0fc727407b66dbcb13fee34d68ea197
	_putchar((n & 1) + '0');
}
