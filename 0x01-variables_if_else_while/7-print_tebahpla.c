/**
 * main - entry point and prints the alphabet in reverse.
 * published by yonas ghiwot
 * Return: 0 on success
*/

#include <stdio.h>

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
