#include "main.h"

/**
 * malloc_checked - a function that allocate memory using malloc
 *                - If malloc fails, terminate process with status 98
 * @b: input arg  unsigned int i.e the  memory size to be allocated
 * Return:  a pointer to the allocated memory space
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
