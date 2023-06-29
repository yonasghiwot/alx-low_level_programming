#include "main.h"
/**
 * reverse_array -  reverses the content of an array of integers.
 * @a: array to be reversed
 * @n: size of array.
 * Return: nothing void it is.
 */
void reverse_array(int *a, int n)
{
	int tmp, start, last;

	start = 0;
	last = n - 1;
	while (start < last)
	{
		tmp = *(a + start);
		*(a + start) = *(a + last);
		*(a + last) = tmp;
		start++;
		last--;
	}
}
