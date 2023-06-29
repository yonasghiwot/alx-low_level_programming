#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
 *_strcat - concatenates two strings
 * @dest: string with concatenation
 * @src: string to be concatenated
 * Return: char of dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int  i;

	int src_len = 0;

	while (*(dest + dest_len) != '\0')
	{
		dest_len++;
	}
	dest_len = dest_len - 1;
	while (*(src + src_len) != '\n')
	{
		src_len++;
	}
	src_len = src_len - 1;
	for (i = 0 ; *(src + i) != '\0' ; i++)
	{
		*(dest + dest_len + i + 1) = *(src + i);
	}
	return (dest);
}
