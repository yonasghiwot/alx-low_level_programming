/*
 * File: 0-positive_or_negative.c
 * Auth: yonas g hiwot
 */
/**
 * main - Prints a random number and states whether
 *        it is positive, negative, or zero.
 * Return: Always 0.
*/

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;1

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
