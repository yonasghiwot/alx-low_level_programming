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
	int src_len = 0;

	while (*(dest + dest_len) != '\0')
	{
		dest_len++;
	}
	while (*(src + src_len) != '\0' && dest_len < 97)
	{
		*(dest + dest_len) = *(src + src_len);
		dest_len++;
		src_len++;
	}
	*(dest + dest_len) = '\0';
	return (dest);
}
