#include "main.h"

/**
 * _memset -function fills the first n bytes of the memory area.
 *@s: pointer to the memory area
 *@b: character bytes that filles the memory area
 *@n: the first n bytes of the memory
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
