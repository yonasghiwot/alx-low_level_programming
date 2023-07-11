#include <stdlib.h>
#include "main.h"
/**
 * create_array -function creates array of chars,&initializes it with chars
 * @size: size of the array to be created
 * @c: characters
 * Return: a pointer to the array or null if fails or null if size is 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = (char *)malloc(size * sizeof(c));

	if (size == 0 || array == NULL)
	{
		array = NULL;
		return (array);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}

