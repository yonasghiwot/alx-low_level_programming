#include "search_algos.h"

/**
 * binary_search - search for a value in a sorted array
 * @array: pointer to the array to search for
 * @size: size of the array
 * @value: the target value to search for
 * Return: the target value index else -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, start = 0, end = size - 1;
	int midle;

	if (array == NULL)
		return (-1);

	while (start <= end)
	{
		midle = (start + end) / 2;

		printf("Searching in array: ");
		for (i = start; i <= end; i++)
		{
			if (i != end)
				printf("%d, ", array[i]);
			else
				printf("%d", array[i]);
		}
		printf("\n");


		if (array[midle] < value)
			start =  midle + 1;
		else if (array[midle] > value)
			end = midle - 1;
		else
			return (midle);
	}
	return (-1);
}
