#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - a function that concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: a pointer to  new string or null if fails or null strings passed
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, len1, len2;
	char *arr = NULL;

	len1 = strlen(s1);
	len2 = strlen(s2);
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)

	arr = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (arr == NULL)
	{
		return (arr);
	}
	for (i = 0; i < len1; i++)
	{
		arr[i] = s1[i];
	}
	for (; i < len2 + len1; i++)
	{
		arr[i] = s2[i - len1];
	}
	return (arr);
}
