#include "main.h"

/**
 * _strstr -  a function that locates a substirng
 *@haystack: pointer to string
 *@needle: pointer to string
 * Return: a pointer to the beginning of the located substring,
 * : or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int k;

	for (i = 0 ; *(haystack + i) ; i++)
	{
		for (k = i, j = 0 ; *(needle + j) != '\0' ; j++, k++)
		{
			if (*(haystack + k) != *(needle + j) || *(haystack + k) == '\0')
			{
				break;
			}
		}
		if (*(needle + j) == 0)
		{
			return (haystack + i);
		}
	}
	return (0);
}
