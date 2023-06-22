#include <stdio.h>

/**
 * main -finds and prints the largest prime factor of the number 612852475143,
 * followed by a new line.
 * Return: 0.
 */
int main(void)
{
	long number = 612852475143, divider;

	while (divider < (number / 2))
	{
		if ((number % 2) == 0)
		{
			number /= 2;
			continue;
		}

		for (divider = 3; divider < (number / 2); divider += 2)
		{
			if ((number % divider) == 0)
				number /= divider;
		}
	}

	printf("%ld\n", number);

	return (0);
}
