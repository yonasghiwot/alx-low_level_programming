#include "main.h"

/**
 *_strncat - concatenates two strings
 * @dest: string with concatenation
 * @src: string to be concatenated
 * @n :max size of source string
 * Return: char of dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int src_len = 0;

	while (*(dest + dest_len) != '\0')
	{
		dest_len++;
	}
	while (*(src + src_len) != '\0' && dest_len < 97 && src_len < n)
	{
		*(dest + dest_len) = *(src + src_len);
		dest_len++;
		src_len++;
	}
	*(dest + dest_len) = '\0';
	return (dest);
}
