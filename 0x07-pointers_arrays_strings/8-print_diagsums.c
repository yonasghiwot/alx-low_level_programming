#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 *@a: square matrix of which we print the sum of diagonals
 *@size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i;

	int Ur_Ll_dig_sum;
	int Ul_lr_dig_sum;

	Ur_Ll_dig_sum = 0;
	Ul_lr_dig_sum = 0;

	for (i = 0; i < size; i++)
	{
		Ur_Ll_dig_sum += a[(size * i) + i];
		Ul_lr_dig_sum += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", Ur_Ll_dig_sum, Ul_lr_dig_sum);
}
