/**
 * main - entry point and prints all numbers of base 16.
 *by yonas ghiwot  
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
	i = 'a';
	while (i <= 'f')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);

}
