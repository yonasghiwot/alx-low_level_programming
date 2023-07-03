#include "main.h"

/**
 * _memcpy - function copies n bytes from memory area src to memory area dest.
 *@src: pointer to the source memory area
 *@dest:pointer to the source memory area.
 *@n: the first n bytes of the memory
 * Return: a pointer to the memory area dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
