#include "main.h"
#include <stdio.h>
/**
 * _strcpy -  a function that copies the string of an arrays to another array
 * @dest: destination string array
 * @src: source string array array
 * Return: dest which is string  .
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
