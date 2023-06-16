/**
 * main - entry point of the program and prits num 0-9
 *
 * Return: 0 on success
 */
#include <stdio.h>
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
