#include "search_algos.h"

/**
 * linear_search - Linearly search for number in an array
 * @array: Pointer to the first element of the array to be searched
 * @size: Number of elements of the arrary to search in
 * @value:Target value to search for
 * Return: Return the index the value is located else -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for (; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
