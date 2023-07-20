#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer and
 *            return index place if comparison = true, else -1
 * @array: array of integers
 * @size: number of elements in array
 * @cmp:is a pointer to the function to be used to compare values
 * Return: -1 If size <= 0 or If no element matches or if the array is null
 *	:return the index place if comparison is true
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}



