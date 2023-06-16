/**
 * main - Prints the alphabet in lowercase, except for q and e.
 *
 * Return: Always 0. success 

#include <stdio.h> */
int main(void)
{
	char letter , e, q;

	e = 'e';
	q = 'q';

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');

	return (0);
}
