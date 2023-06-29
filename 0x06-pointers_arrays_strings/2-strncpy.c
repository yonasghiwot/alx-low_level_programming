#include "main.h"
/**
 * _strncpy - a function that copies a string.
 * @dest: a pointer pointing to the destination of the copied comes
 * @src: a pointer pointing to source of string to be copied
 * @n: size of n bytes of src are copied
 * Return: c pointer to destination string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	for ( ; i < n; i++)
	{
		*(dest + i) = '\0';
	}
	return (dest);
}
