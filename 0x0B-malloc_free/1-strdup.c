#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - function returns a pointer to a new string which is a duplicate
 * of the string str.
 * @str: string to be copied
 * Return: a pointer to new string or null if insufficient memor or if null
 */
char *_strdup(char *str)
{
	char *arr;
	unsigned int len1, len2;

	if (str != NULL)
	{
		len2 = strlen(str);
		arr = (char *)malloc((len2 + 1) * sizeof(char));
	}
	if (str == NULL || arr == NULL)
	{
		arr = NULL;
		return (NULL);
	}
	for (len1 = 0; len1 < len2; len1++)
	{
		arr[len1] = str[len1];
	}
	return (arr);
}
